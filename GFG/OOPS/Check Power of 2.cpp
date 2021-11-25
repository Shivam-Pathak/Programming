#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<"Not the Power of 2"<<endl;
    else if(n&(n-1))
        cout<<"Not the Power of 2"<<endl;
    else
        cout<<"Power of 2"<<endl;
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
        solve();
    }
    return 0;
}