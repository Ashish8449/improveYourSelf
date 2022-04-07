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
ll mex(vl &v)
{
    ll c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (c == v[i])
        {
            c++;
        }
        else if (c < v[i])
        {
            break;
        }
    }
    return c;
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
        vl v(n);
        input_array(v);
        sort(all(v));

        ll x = mex(v);
        ll sum= accumulate(all(v),0);
        if (x == 0)
        {
            cout << v[0] - 1 << endl;
        }
        else if (sum==0)
        {
            cout << -1 << endl;
        }
        else
        {
            set<int> st;
            for (int i = 0; i < n; i++)
            {
                st.insert(v[i]);
            }
            vl vec;
            for (auto &&i : st)
            {
                vec.pb(i);
            }
            ll ans = 0;
            //    print_array(vec);
               ll start= lower_bound(all(vec), x)- vec.begin();
            for (int i = start; i < vec.size(); i++)
            {
                //   dbg(i);
                ll indx = lower_bound(all(vec), v[i] - x + 1) - vec.begin();
                //    cout<<indx<<endl;
                // dbg(v[indx]);
                if (indx<n&& v[indx] == v[i] - x + 1 && i - indx == x - 1)
                {
                    ans++;
                    // dbg(i);
                }
                //    dbg(indx);
            }
            cout << ans << endl;
        }
    }
    return 0;
}