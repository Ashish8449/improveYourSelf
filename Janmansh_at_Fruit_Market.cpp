
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

using namespace std;

int main()
{

    string s, r;
    ll a, b, c, d, e, f, m, n, p, q;

    tc(t)
    {
        cin >> a;
        vl v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }

        sort(all(v));
        cout << (a - 1) * v[0] + v[1] << endl;
    }
    return 0;
}