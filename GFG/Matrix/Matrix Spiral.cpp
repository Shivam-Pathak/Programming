#include <bits/stdc++.h>
using namespace std;


void solve()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==j)
				cout<<arr[i][j]<<" ";
		}	
	}
	
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