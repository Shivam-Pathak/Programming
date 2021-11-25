
#include<bits/stdc++.h>
#include<string>
using namespace std;

int prime(int n)
	{	
		int flag;
		for(int i=2;i<n/2;i++)
		{
			if(n%i==0)
				flag=0;
				break;
			else
				flag=1;
		}
		if(flag==1)
			return n;
		else
			return 0;
	}
std::vector<int> arr;
int fun(long long n)
	    {	
	    	int y;
	    	while(n%2==0)
	    	{
	    		n=n/2;
	    		cout<<2<<" ";
	    	}
	    	for (int i = 3; i < sqrt(n); i=i+2)
	    	{
	    		while(n%i==0)
	    		{
	    			n=n/i;
	    			cout<<i<<" ";
	    		}
	    	}
	    	if(n>2)
	    		{
	    		cout<<n<<"\n";
	    		}
	    }  	
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	    long long n,x;
	    cin>>n;
	    fun(n);
	    return 0;
}