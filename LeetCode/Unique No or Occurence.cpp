#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0;
    int arr[] = {1, 2, 2, 3, 3, 3};
    int hash1[3] = {0};
    int hash2[3] = {0};
    for (int i = 0; i < 6; i++)
    {
        hash1[arr[i]]++;
        hash2[arr[i]]++;
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= 3; j++)
        {
            if (hash1[i] == hash2[j])
            {
                cout << "Repeat";
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        cout << "Repeat";
    else
        cout << "not";
}
