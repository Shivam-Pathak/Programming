
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	   
		for (int i = 2; i < 500; ++i)
		{
			for (int j = 2; j < 500; ++j)
			{
				for (int k = 2; k < 500; ++k)
				{
					if(((i*i)+(j*j))==(k*k))
					{
						if((i+j+k)==1000)
							{
								cout<<(i*j*k)<<" ";
							}
					}
				}	
			}
		}
	    
	    return 0;
	    
}