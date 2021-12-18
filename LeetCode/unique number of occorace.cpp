#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[6] = {2, 3, 4, 4, 4, 3};

    vector<int> ans;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        ans.push_back(count);
        count = 0;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
