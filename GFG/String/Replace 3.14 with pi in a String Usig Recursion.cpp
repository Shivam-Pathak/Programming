#include <bits/stdc++.h>
using namespace std;

//Replace pi with 3.14 in a string

void solve(string s)
{   
    if(s.length()<=1)
        return;
    if(s[0]=='p' && s[1]=='i')
        {
            cout<<"3.14";
            solve(s.substr(2));
        }
    else
        {
            cout<<s[0];
            solve(s.substr(1));
        }
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
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}