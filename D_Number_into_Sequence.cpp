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
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
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
bool mycom(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.second > p2.second;
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
        map<ll, ll> map;
        ll i = 2;
        ll z = n;
        while (i <= sqrt(n) && z > 1)
        {
            if (z % i == 0)
            {
                map[i]++;
                z /= i;
            }
            else
            {
                i++;
            }
        }
        if (z > 1)
        {
            map[z]++;
        }
        vector<pair<ll, ll>> v;
        for (auto &&x : map)
        {
            v.pb(mp(x.first, x.second));
            // cout<<x.first<<" "<<x.second<<endl;
        }
        // vl ans;
        sort(all(v),mycom);
      
         vl ans(v[0].second, v[0].first);
         for (ll i = 1; i < v.size(); i++)
         {
             for (ll j = 0; j < v[i].second; j++)
             {
                 ans.back()*=v[i].first;
             }
             
         }
         cout<<ans.size()<<endl;
         print_array(ans);
         
       
    }
    return 0;
}
