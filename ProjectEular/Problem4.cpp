 #include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
int palint(int n)
    {
        int t,r=0;
        t=n;
        while (t != 0)
         {
            r = r * 10;
            r = r + t%10;
            t = t/10;
         }
         if (n == r)
            return true;
        else
            return false;
    }
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	    ll sum,max=0,total=0;
	    for (int i = 100; i < 999; ++i)
        {
            for (int j = 100; j < 999; ++j)
            {
                sum = i*j; 
                if(palint(sum)==true)
                {
                    total = sum;
                }
            }
            if(max<total)
            {
                max=total;
            }
            total=0;
        }
        cout<<max;
}