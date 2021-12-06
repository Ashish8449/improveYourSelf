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
#define nline "\n"
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
vl ans;
set<pair<ll, ll>, greater<>> s;
void dfs(int node)
{
    if (vis[node])
        return;

    vis[node] = 1;
    s.insert(mp(adj[node].size(), node));
    for (ll i = 0; i < adj[node].size(); i++)
    {
        ll next_node = adj[node][i];
        dfs(next_node);
    }

    return;
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
    // string s,r;

    tc(t)
    {  
        adj.clear();
        cin >> n >> m;
        vis.resize(n + 1, 0);
        for (ll i = 0; i < vis.size(); i++)
        {
            vis[i] = 0;
        }

        vl ans(n + 1);

        adj.resize(n + 1);
        // dbg(adj.size());
        // print_array(ans);

        for (ll i = 0; i < m; i++)
        {
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        ll z = 1;
        for (ll i = 1; i < n + 1; i++)
        {
            s.clear();
            if (!vis[i])
            {
                dfs(i);

                for (auto &&x : s)
                {
                    // cout << x.first << " " << x.second << endl;
                    ans[x.second] = z;
                    z++;
                }
                // print_array(ans);
            }
        }
        // for (ll i = 1; i < n + 1; i++)
        // {
        //     cout << i << " ::";
        //     print_array(adj[i]);
        // }

        vector<vl> graph(n + 1);
        for (ll i = 1; i < adj.size(); i++)
        {
            for (ll j = 0; j < adj[i].size(); j++)
            {
                graph[ans[i]].pb(ans[adj[i][j]]);
                // graph[ans[adj[i][j]]].pb(ans[i]);
            }
        }
        // for (ll i = 1; i <= n; i++)
        // {
        //     cout << i << " ::";
        //     print_array(graph[i]);
        // }
        ll mx = 0 , mm =INT64_MAX;
        mx = 0;
        for (ll i = 1; i < graph.size(); i++)
        {
            ll counter = 0;
            for (ll j = 0; j < graph[i].size(); j++)
            {
                if (i > graph[i][j])
                    counter++;
                // graph[ans[adj[i][j]]].pb(ans[i]);
            }
            mx = max(mx, counter);
            mm=min(counter , mm);
        }

        cout << mx-mm << endl;
        for (ll i = 1; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
