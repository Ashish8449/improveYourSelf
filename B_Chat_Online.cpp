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
        ll l, r;
        cin >> p >> q >> l >> r;
        vl A(5000, 0);
        for (ll i = 0; i < p; i++)
        {
            cin >> a >> b;
            for (ll j = a; j < b + 1; j++)
            {
                A[j] = 1;
            }
        }
        vector<pair<int, int>> x(q);
        for (ll i = 0; i < q; i++)
        {
            cin >> x[i].first >> x[i].second;
        }
        ll ans = 0;

        for (ll i = l; i < r + 1; i++)
        {
            // dbg(i);
            vl B(5000, 0);
            for (ll j = 0; j < x.size(); j++)
            {
                for (ll k = x[j].first + i; k <= x[j].second + i; k++)
                {
                    // dbg(k);
                    B[k] = 1;
                }
            }

            bool flg = 0;
            // print_array(A);
            // print_array(B);
            for (ll j = 0; j < B.size(); j++)
            {
                if (B[j] & A[j])
                    flg = 1;
            }

            if (flg)
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}