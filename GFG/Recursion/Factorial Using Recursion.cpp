#include <bits/stdc++.h>
using namespace std;
long long int solve(long long int n){
    if(n==1)
        return 1;
    else
        return n * solve(n-1);
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
        long long int n;
        cin>>n;
        cout<<solve(n);
    }
    return 0;
}