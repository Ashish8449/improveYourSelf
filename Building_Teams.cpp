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
vl vis, col;
bool flg = 1;
void dfs(int node, int color)
{
    // dbg(node);
    if (vis[node])
        return;
    vis[node] = 1;
    col[node] = color;
    for (ll i = 0; i < adj[node].size(); i++)
    {
        ll next_node = adj[node][i];
        if (!vis[next_node])
        {
            dfs(next_node, !color);
        }
        else
        {
            if (col[next_node] != color)
            {
                dfs(next_node, !color);
            }
            else
            {
                flg = 0;
                return;
            }
        }
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
    string s, r;

    // tc(t)
    {
        cin >> n >> m;
        adj.resize(n + 1);
        vis.resize(n + 1, 0);
        col.resize(n + 1, -1);
        for (ll i = 0; i < m; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (ll i = 1; i < n + 1; i++)
        {
            if (!vis[i])
                dfs(i, 0);
        }

        if (flg)
        {
            for (ll i = 1; i < n + 1; i++)
            {
                if (!col[i])
                    cout << 2 << " ";
                else
                    cout << col[i] << " ";
            }
        }
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}