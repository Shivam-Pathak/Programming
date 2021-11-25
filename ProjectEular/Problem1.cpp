
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	    int n,sum=0;
	    cin>>n;
	    for(int i=1;i<n;i++)
	    {
	    	if(i%3==0)
	    	{
	    		sum += i;
	    	}
	    	else if(i%5==0)
	    	{
	    		sum += i;
	    	}
	    }
	    cout<<sum;
}