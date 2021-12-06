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
        cin >> n;
        vl v(n);
        unordered_map<ll, ll> map;

        ll mx = INT64_MIN, mn = INT64_MAX;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            map[v[i]]++;
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }
        sort(all(v));
        ll ans = INT64_MAX;
        if (n == 2 || (map[mx] >= 2 && map[mn] >= 2))
        {
            cout << 0 << endl;
            continue;
        }
        if (n == 3)
        {
            cout << min(abs(v[2] - v[1]), abs(v[0] - v[1])) << endl;
            continue;
        }
        if (n >= 4)
        {

            // dbg(ans);
            ll sum = v[0] + v[n - 1];
            if (sum % 2)
            {
                ll mid;
                mid = sum / 2;
                ll lbindex = lower_bound(all(v), mid) - v.begin();
                ll ubindex = upper_bound(all(v), mid) - v.begin();

                if (abs(v[ubindex] - mid) == abs(v[lbindex] - mid))
                    ans = min(ans, map[v[n - 1]]);
                else
                {
                    ans = min(ans, abs(mid - v[lbindex]) + abs(mid - v[ubindex]) + map[v[n - 1]]);
                }
                mid = sum / 2;
                mid++;
             lbindex = lower_bound(all(v), mid) - v.begin();
                 ubindex = upper_bound(all(v), mid) - v.begin();

                if (abs(v[ubindex] - mid) == abs(v[lbindex] - mid))
                    ans = min(ans, map[v[0]]);
                else
                {
                    ans = min(ans, abs(mid - v[lbindex]) + abs(mid - v[ubindex]) + map[v[0]]);
                }
            }
            else
            {
                ll mid = sum / 2;
                if (map[mid] >= 2)
                    ans = 0;
                else
                {
                    ll lbindex = lower_bound(all(v), sum / 2) - v.begin();
                    ll ubindex = upper_bound(all(v), mid) - v.begin();

                    if (abs(v[ubindex] - mid) == abs(v[lbindex] - mid))
                        ans = 0;
                    else
                    {
                        ans = min(ans, abs(mid - v[lbindex]) + abs(mid - v[ubindex]));
                    }
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}