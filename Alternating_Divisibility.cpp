
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;

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

using namespace std;

int main()
{

    fast;
    string s, r;
    ll a, b, c, d, e, f, m, n, p, q;

    tc(t)
    {
        cin >> n;
        ll odd = 1;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {

                cout << odd << " ";
            }
            else
            {
                cout << 2 * (odd) << " ";
                odd += 2;
            }
        }
        cout << endl;
    }
    return 0;
}