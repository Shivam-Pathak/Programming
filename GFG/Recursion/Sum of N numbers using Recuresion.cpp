#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==0)
        return 0;
    else
        return n + solve(n-1);
}

  
int main()
{
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<solve(n);
    }
    return 0;
}