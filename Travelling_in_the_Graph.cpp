/*
*
*************************************************************
* AUTHOR : Ashish Gururani                                  *
* Language: C++14                                           *
* Purpose: -                                                *
* IDE used: Visual Studio Code.                             *
*************************************************************
*
Comments will be included in practice problems if it helps ^^
*/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define rep(i, n, k) for (ll i = 0; i < n; i += k)
#define rrep(i, n, k) for (ll i = n; i >= 0; i -= k)
#define rep1(i, n, k) for (ll i = 1; i < n; i += k)
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvs vector<vs>
#define mem(a, b) memset(a, b, sizeof(a))
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb emplace_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define tc(t)    \
    long long t; \
    cin >> t;    \
    while (t--)
#define all(x) (x).begin(), (x).end()

#define dbg(x) cout << #x << " = " << x << endl
#define inf 1e6 + 5
#define mod ll(1e9 + 7)
using namespace std;

template <typename T>
void print_array(const T &arr, char c = ' ')
{
    for (auto x : arr)
    {
        cout << x << c;
    }
    cout << endl;
}

template <typename T>
void input_array(vector<T> &arr)
{
    for (ll i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

vvl adj;
vl vis;
vector<ll> comp;
void dfs(int v)
{
    vis[v] = true;
    comp.push_back(v);
    for (size_t i = 0; i < (int)adj[v].size(); ++i)
    {
        int to = adj[v][i];
        if (!vis[to])
            dfs(to);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    ll a, b, c, d, e, f, m, n, p, q;
    string s, r;

    tc(t)
    {
        cin >> n >> m;
        adj.resize(n + 1);
        vvl cc;
        vis.resize(n + 1, 0);

        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        ll count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                // dbg(i);

                dfs(i);
                // sort(all(comp));
                cc.push_back(comp);
                // print_array(comp);

                //    if(count){
                //     //    ll tem = INT64_MAX;
                //     //    for (int j = 0; j < comp.size()-1; j++)
                //     //    {
                //     //        if(comp[i]+1==comp[i+1]){
                //     //            tem=1;
                //     //        }
                //     //    }
                //     //    if(comp[comp.size()-1]!=n)tem=1;

                //    }
                comp.clear();
                count++;
            }
        }
        cout<<count-1<<endl;
        adj.clear();
        vis.clear();
    }
    return 0;
}