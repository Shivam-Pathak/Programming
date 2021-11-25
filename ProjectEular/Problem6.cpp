
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	int sum1=0,sum2=0;
	for (int i = 1; i <=100; ++i)
	{
		sum1 += i*i;
		sum2 += i;
	}
	cout<<((sum2*sum2)-sum1);
}