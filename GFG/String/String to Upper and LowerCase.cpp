#include <bits/stdc++.h>
using namespace std;


void solve()
{
	string str = "shivam Pathak";
	transform( str.begin(), str.end(), str.begin(), ::toupper);
	cout<<"To Uppercase - "<<str<<endl;
	transform( str.begin(), str.end(), str.begin(), ::tolower);
	cout<<"To Lowercase - "<<str<<endl;
}
  
int main()
{
    #ifndef Online_Judge
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif

    int tc=1;
    cin>>tc;
    while(tc--)
    {
    	solve();
    }
    return 0;
}