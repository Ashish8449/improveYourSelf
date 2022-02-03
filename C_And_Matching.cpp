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
        ll k;
        cin >> n >> k;
        if (k == n - 1)
            cout << -1 << endl;
        else
        {
            vl v;
            if (k == 0)
            {
                v.pb(0);
                v.pb(n - 1);
                for (int i = 1; i < n / 2; i++)
                {
                    v.pb(i);
                    v.push_back(n - 1 - i);
                }
            }
            else
            {
                // v.push_back(k);
                // v.push_back(n - 1);
                for (int i = 1; i < n / 2; i++)
                {
                    if (i == k)
                    {
                         v.push_back(k);
                         v.pb(n-1);
                        v.pb(0);
                        v.pb(n - 1 - i);
                    }
                    else if (n - 1 - i == k)
                    {
                        v.pb(0);
                        v.pb(i);
                        v.pb(n - 1 );
                        v.pb(k);
                    }
                    else
                    {
                        v.pb(i);
                        v.pb(n - 1 - i);
                    }
                    // print_array(v);
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout<<v[i++]<<" "<<v[i]<<endl;
            }
            
        }
    }
    return 0;
}