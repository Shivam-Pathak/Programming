#include <bits/stdc++.h>
using namespace std;
int solve(int n,int p){
    if(p==1)
        return n;
    else
        return n * solve(n,p-1);
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
        int n,p;
        cin>>n>>p;
        cout<<solve(n,p);
    }
    return 0;
}