#include<bits/stdc++.h>
#include<string>

#define ll long long

using namespace std;
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	    int32_t n;
        cin>>n;
	    for (int i = 2; i < n; ++i)
        {
            if(i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0 && i%7==0 && i%8==0 && i%9==0 && i%10==0 && i%11==0&& i%12==0 && i%13==0 && i%14==0 && i%15==0 && i%16==0 && i%17==0 && i%18==0 && i%19==0)
            {
                cout<<i<<" ";
            }
        }
}