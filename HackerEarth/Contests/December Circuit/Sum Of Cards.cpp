#include <bits/stdc++.h>
using namespace std;

void solve()
    {
        long long N,x,sum=0,ans=0;
        cin>>N>>x;
        int arr[N];
        for(int i=0;i<N;i++){
            int temp;
            cin>>temp;
            arr[i] = temp;
            sum += temp;
        }
        // cout<<sum<<endl;
        if(sum==0){
            cout<<0<<endl;
        }else if(sum==x){
            cout<<1<<endl;
        }else if(sum<x){
            int temp = -1 * sum;
            if(temp%x==0){
                ans = temp/x;
            }else if(temp%x!=0){
                ans = temp/x + 1;
            }
            cout<<ans<<endl;
        }else if(sum>x){
            if(sum%x==0){
                ans = sum/x;
            }else if(sum%x!=0){
                ans = sum/x + 1;
            }
            cout<<ans<<endl;
        }
    }

int main()
{
    #ifndef Online_Judge
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif
	int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

