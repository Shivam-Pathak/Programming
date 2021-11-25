#include <bits/stdc++.h>
using namespace std;


bool solve()
{
	int n1,n2,x;
	cin>>n1>>n2>>x;
	int arr[n1][n2];

	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			cin>>arr[i][j];
		}	
	}
	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			if(arr[i][j]==x)
			{
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}	
	}
	return false;
}
  
int main()
{
    #ifndef Online_Judge
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif

    int tc;
    cin>>tc;
    while(tc--)
    {
    	cout<<solve();
    }
    return 0;
}