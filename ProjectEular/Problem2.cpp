
#include<bits/stdc++.h>
#include<string>
using namespace std;

long long fibo(long long n)
	{
		if(n<2)
			return n;
		else 
			return fibo(n-1) + fibo(n-2);
	}

int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	    long long n,sum=0;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	    	if(fibo(i)<4000000)
	    	{
	    		if(fibo(i)%2==0)
	    		{
	    			sum += fibo(i);
	    		}
	    	}
	    }
	    cout<<sum<<endl;
	    return 0;
}