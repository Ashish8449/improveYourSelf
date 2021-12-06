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

    tc(t)
    {
        ll x;
        cin >> n >> x;
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = v[i].first ^ x;
        }
        if (x == 0)
        {
            
        
            map<ll, ll> map;
            for (ll i = 0; i < n; i++)
            {
                map[v[i].first]++;
            }
            ll ans = 0;
            for (auto x : map)
            {
                ans = max(ans, x.second);
            }
            cout << ans << " " << 0 << endl;
        }
        else 
        {
            map<ll, pair<ll, ll>> ans;
            for (ll i = 0; i < n; i++)
            {
                ans[v[i].first].first++;
                ans[v[i].second].second++;
                ans[v[i].second].first++;
            }
            ll cn = 0, mm = INT64_MAX;
            for (auto x : ans)
            {
                //  cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl
                //    cout<<x.second.second<<endl;
                
                if (x.second.first >= cn)
                {
                    if(cn==x.second.first)
                    mm = min(mm, x.second.second);
                    else mm=x.second.second;
                    cn = x.second.first;
                }
            }
            cout << cn << " " << mm << endl;
        }
    }
    return 0;
}