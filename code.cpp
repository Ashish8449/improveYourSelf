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
        ll ans = INT64_MAX;
        cin >> n;
        vl a(n);
        input_array(a);
        sort(all(a));
        ll k, ans1 = 0, ans2 = 0, d2, d1;
        ll l = 1, r = n - 2;
        // dbg(ans);
        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 3)
        {
            cout << min(a[2] - a[1], a[1] - a[0]) << endl;
            continue;
        }
        // print_array(a);
        // for (ll i = 0; i < n - 1; i++)
        // {
        //     ans1 += abs(a[i] - a[(n - 1) / 2]);
        // }
        // for (ll i = 1; i < n; i++)
        // {
        //     ans2 += abs(a[i] - a[1 + (n - 1) / 2]);
        // }
        // ans = min(ans1, ans2);
        //  dbg(ans);
        while (l < r)
        {
            d2 = a[n - 1] - a[l], d1 = a[r] - a[0];
            dbg(d1);
            dbg(d2);
            ans = min(ans, abs(d1 - d2));
            if (d1 < d2)
                l++;
            else
                r--;
        }
        cout << ans << endl;
    }
    return 0;
}