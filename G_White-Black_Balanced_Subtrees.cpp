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
ll ans = 0;
vl vis;
string s, r;

void dfs(int v, ll &w, ll &b, vvl &adj)
{
    // Mark the current node as visited and
    // print it
    if(vis[v])return;
    vis[v] = true;
    // cout << v << " "<<endl;

    // Recur for all the vertices adjacent
    // to this vertex
    for (int i = 0; i < adj[v].size(); i++)
    {
        if (v != adj[v][i])
        {
            dfs(adj[v][i], w, b, adj);
            w += (s[adj[v][i] - 1] == 'W');
            b += (s[adj[v][i] - 1] == 'B');
         
        }
    }
//    if(w==b && w!=0&& b){
//        cout<<v<<endl;
//    }
// cout<<v<<" "<< w<<" "<< b<<endl;
    ans += (w == b && w != 0);
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

    tc(t)
    {
        cin >> n;
        vl v(n - 1);
        vis.resize(n + 1, 0);
        vvl adj(n + 1);
        input_array(v);
        cin >> s;
       
        for (int i = 0; i < v.size(); i++)
        {
            adj[i + 2].pb(v[i]);
            adj[v[i]].pb(i + 2);
            
        }
        // for (int i = 0; i < adj.size(); i++)
        // {
        //     print_array(adj[i]);
        // }

        ans = 0;
        a = 0, b = 0;
        dfs(1, a, b, adj);
        cout << ans << endl;
    }
    return 0;
}