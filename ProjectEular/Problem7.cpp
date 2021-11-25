
#include<bits/stdc++.h>
#include<string>
using namespace std;
int prime(int n)
	{	
		bool flag = true;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
				{
					flag=false;
					break;
				}
		}
		return flag;
	}
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	    long long n,count=0;
	    bool flag;
	    cin>>n;
	    for (int i = 2; i < n; ++i)
	    {
	    	flag = prime(i);
	    	if(flag==true)
	    	{
	    		cout<<i<<" ";
	    		count++;
	    		if(count == 1001)
	    		{
	    			cout<<" No. Find :- "<<i<<endl;
	    		}
	    	}
	    }
	    
	    return 0;
	    
}