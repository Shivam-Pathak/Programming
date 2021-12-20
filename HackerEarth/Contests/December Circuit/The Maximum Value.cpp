#include <bits/stdc++.h>
using namespace std;

bool isPrime (int number) { 
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i=3; (i*i) <= number; i+=2) {
        if (number % i == 0 ) return false;
    }
    return true;
}

void solve(){
    int n,count=0;
    cin>>n;
    int arr[n]={0};
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            // cout<<i<<" ";
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    #ifndef Online_Judge
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif
	int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

