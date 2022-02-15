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
// Stores the parent of each vertex
int parent[1000000];

// Function to find the topmost
// parent of vertex a
int root(int a)
{
    // If current vertex is
    // the topmost vertex
    if (a == parent[a])
    {
        return a;
    }

    // Otherwise, set topmost vertex of
    // its parent as its topmost vertex
    return parent[a] = root(parent[a]);
}

// Function to connect the component
// having vertex a with the component
// having vertex b
void connect(int a, int b)
{
    // Connect edges
    a = root(a);
    b = root(b);

    if (a != b)
    {
        parent[b] = a;
    }
}

// Function to find unique top most parents
void connectedComponents(int n)
{
    set<int> s;

    // Traverse all vertices
    for (int i = 0; i < n; i++)
    {

        // Insert all topmost
        // vertices obtained
        s.insert(root(parent[i]));
    }

    // Print count of connected components
    cout << s.size() << '\n';
}

// Function to print answer
void printAnswer(int N,
                 vector<vector<int>> edges)
{

    // Setting parent to itself
    for (int i = 0; i <= N; i++)
    {
        parent[i] = i;
    }

    // Traverse all edges
    for (int i = 0; i < edges.size(); i++)
    {
        connect(edges[i][0], edges[i][1]);
    }

    // Print answer
    connectedComponents(N);
}

vvl adj;
vl vis;
ll ct = 0;
void dfs(int node, int par)
{
    if (vis[node])
        return;
    ct++;
    vis[node] = 1;
    for (ll i = 0; i < adj[node].size(); i++)
    {
        if (!vis[adj[node][i]])
        {

            dfs(adj[node][i], node);
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

    tc(t)
    {
        cin >> n;
        vi v(n);
        input_array(v);
       
        adj = vvl(n + 1);
        vis = vl(n + 1, 0);
        map<int,int>map;
        for (int i = 0; i < n; i++)
        {
            map[v[i]]++;
            for (int j = 1; j < v[i]; j++)
            {
                if(!map[j]){

                adj[v[i]].pb(j);
                adj[j].pb(v[i]);
                }
            }
        }
        // for (int i = 0; i < n+1; i++)
        // {
        //     cout<<i<<" ";
        //     print_array(adj[i]);
        // }
        // cout<<"end"<<endl;
        
        vl cc;
        for (ll i = 1; i < n + 1; i++)
        {
            if (!vis[i])
            {
                ct = 0;
                dfs(i, -1);

                cc.pb(ct);
            }
        }
        cout<<cc.size()<<endl;

       
    }
    return 0;
}