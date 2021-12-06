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

    //tc(t)
    {
        cin >> n >> m >> q;
        adj.resize(n + 1, vl(n + 1, 1e17));
        // for self 1-> 1 dis must be zero.
        for (ll i = 0; i < n + 1; i++)
        {
            adj[i][i] = 0;
        }

        for (ll i = 0; i < m; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u][v] = min(adj[u][v], w);
            adj[v][u] = min(adj[v][u], w);
        }
        for (ll i = 1; i < n + 1; i++)
        {
            for (ll j = 1; j < n + 1; j++)
            {
                for (ll k = 1; k < n + 1; k++)
                {
                    adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
                }
            }
        }
        // for (ll i = 0; i < n + 1; i++)
        // {
        //     print_array(adj[i]);
        // }

        for (ll i = 0; i < q; i++)
        {
            cin >> a >> b;
            if (adj[a][b] == ll(1e17))
            {
                cout << -1 << endl;
            }
            else
            {
                cout << adj[a][b] << endl;
            }
            // print_array(adj[i]);
        }
    }
    return 0;
}