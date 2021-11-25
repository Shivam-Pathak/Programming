#include <bits/stdc++.h>
using namespace std;


bool solve()
{

	//matrix search only for sorted matrix
	int n1,n2,target;
	cin>>n1>>n2>>target;
	int arr[n1][n2];

	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			cin>>arr[i][j];
		}	
	}
	int r = 0 , c = n2-1;
	while(r<n1 and c>=0)
	{
		if(arr[r][c]==target)
			return true;
		else if(arr[r][c]>target)
			c--;
		else
			r++;
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