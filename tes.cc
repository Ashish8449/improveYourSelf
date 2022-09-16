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
bool comp1(tuple<int, string, int> t1, tuple<int, string, int> t2)
{
    if (get<1>(t1) == get<1>(t2))
    {
        return get<2>(t1) < get<2>(t2);
    }
    return get<1>(t1) < get<1>(t2);
}
bool comp2(tuple<int, string, int> t1, tuple<int, string, int> t2)
{
    if (get<2>(t1) == get<2>(t2))
    {
        return get<1>(t1) < get<1>(t2);
    }
    return get<2>(t1) < get<2>(t2);
}

bool check(tuple<int, string, int> t1, tuple<int, string, int> t2)
{
    return get<0>(t1) == get<2>(t2) && get<1>(t1) == get<1>(t2) && get<2>(t1) == get<0>(t2);
}
vvl adj;
vl vis;
vector<int> bfsOfGraph(int V, vector<vector<int>> adj)
{
    int vis[V] = {0};
    vis[0] = 1;
    queue<int> q;
    // push the initial starting node
    q.push(0);
    vector<int> bfs;
    // iterate till the queue is empty
    while (!q.empty())
    {
        // get the topmost element in the queue
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        // traverse for all its neighbours
        for (auto it : adj[node])
        {
            // if the neighbour has previously not been visited,
            // store in Q and mark as visited
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
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
        int testcase = 0;
        cin >> testcase;
        for (int t = 1; t <= testcase; t++)
        {
            cin >> n >> q;
            vector<vector<int>> v(n + 1);
            for (int i = 0; i < n - 1; i++)
            {
                cin >> a >> b;
                v[a].pb(b);
                v[b].pb(a);
            }
            vector<bool> vis(n + 1, 0);

            ll totalwalter = 0;
            queue<pair<int, int>> que;
            que.push(mp(1, 0));
            vis[1] = 1;
            vl containerPerLever(n, 0);
            containerPerLever[0] = 1;
            while (!que.empty())
            {
                pair<int, int> node = que.front();
                que.pop();

                for (int i = 0; i < v[node.first].size(); i++)
                {
                    /* code */
                    if (vis[v[node.first][i]])
                        continue;
                    que.push(mp(v[node.first][i], node.second + 1));
                    containerPerLever[node.second + 1]++;
                }
            }
            print_array(containerPerLever);
            for (int i = 0; i < q; i++)
            {
                cin >> a;
                totalwalter++;
            }
            ll ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (totalwalter >= containerPerLever[i])
                {
                    totalwalter -= containerPerLever[i];
                    ans += containerPerLever[i];
                }
            }
            cout << "Case #" << t << ": " << ans << endl;
        }
    }
    return 0;
}