#include <bits/stdc++.h>
#define RALL(x) rbegin(x) , rend(x)
#define int long long int
using namespace std;

using pii = pair<int,int>;
const int maxn = 3E5 + 5;
const int mod = 1E9 + 7;

vector<int> adj[maxn],subval,val;
vector<pii> ch;

void dfs(int now,int lst = -1)
{
    for(auto x : adj[now])
    {
        if(x = lst)
            continue;
        dfs(x,now);
    }
    ch.clear();
    for(auto x : adj[now])
    {
        if( x != lst)
            ch.emplace_back(subval[x],x);
    }
    sort(RALL(ch));
    int tok = 1;
    for(auto [val,id] : ch)
        val[id] = tok++;
    for(auto x :adj[now])
    {
        if(x != lst)
            subval[now] += val[x] * subval[x];
    }
}
void solve()
    {
        int n,x;
        cin>>n>>x;
        subval.assign(n,1) , val.assign(n,0);
        for(int i = 0 ; i < n ; ++i)
        {
            vector<int>().swap(adj[i]);
        }
        for(int i = 0 ; i < n-1 ; ++i)
        {
            int u,v;
            cin>>u>>v,--u,--v;
            adj[u].emplace_back(v), adj[v].emplace_back(u);
        }
        dfs(0);
        cout<< subval[0] % mod * x % mod <<endl;
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