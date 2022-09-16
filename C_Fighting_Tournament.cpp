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
        cin >> n >> q;
        vl v(n);
        input_array(v);
        a = max(v[0], v[1]);

        vl ans;

        for (int i = 0; i < n; i++)
        {
            if (v[i] >= a)
            {
                ans.push_back(i + 1);
                a = max(v[i], a);
            }
        }
        // print_array(ans);
        for (int i = 0; i < q; i++)
        {
            ll k;
            cin >> a >> k;

            auto val = lower_bound(all(ans), a) - ans.begin();

            if (ans[val] == a)
            {
                if (k < a - 1)
                {
                    cout << 0 << endl;
                }
                else if (val == ans.size() - 1)
                {
                    b = k - ans[val] + 1 + 1;
                    if(a==1)b--;
                    cout << b << endl;
                }
                else
                {
                    cout << min(ans[val + 1] - ans[val], k - a + 1) << endl;
                }
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}