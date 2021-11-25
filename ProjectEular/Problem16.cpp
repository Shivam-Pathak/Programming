
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	    int sum=0,x;
	    char arr[] = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
	    x=sizeof(arr);
	    for(int i=0;i<sizeof(arr)-1;i++)
	    {
	    	char s =arr[i];
			sum += int(s)-48;
	    }
	    cout<<sum;
	    return 0;
	    
}