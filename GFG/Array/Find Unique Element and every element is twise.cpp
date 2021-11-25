#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n,xorsum=0;
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;

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
        cout<<solve()<<endl;
    }
    return 0;
}