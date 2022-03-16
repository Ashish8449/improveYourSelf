
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

    fast;
    ll a, b, c, d, e, f, m, n, p, q;
    string s, r;

    ll k;
    tc(t)
    {
        cin >> n >> k;
        vl v(n);
        input_array(v);
        ll ans = 0;
        sort(all(v));
        for (int i = 0; i < n; i++)
        {
            if (k >= v[i])
            {
                k -= v[i];
                ans++;
            }
            else if (k >= (v[i] + 1) / 2)
            {
                ans++;
                break;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}