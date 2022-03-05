
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;

#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvs vector<vs>

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

using namespace std;

int main()
{

    fast;
    ll a, b, c, d, e, f, m, n, p, q;
    string s, r;

    tc(t)
    {
        bool flg = 0;
        ll x;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            if (x % i == 0)
            {
                if (x / i <= (n - i + 1))
                {
                    flg = 1;
                    break;
                }
            }
        }
        if (flg)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}