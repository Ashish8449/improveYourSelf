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
int fun(string s, int start, char ch)
{
    for (ll i = start; i < s.length(); i++)
    {
        if (s[i] == ch)
            return i;
    }
    return -1;
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
        cin >> s;
        ll ans = INT64_MAX;
        int index = -1;
        // for 25
      
        reverse(all(s));
        ll tempans = 0;
        ll z = fun(s, 0, '5');
        if (z != -1)
        {
            tempans += z;
            ll y = fun(s, z+1, '2');
            if (y != -1)
            {
                ans = min(ans, tempans + y - z - 1);
            }
            y = fun(s, z+1, '7');
            if (y != -1)
                ans = min(ans, tempans + y - z - 1);
        }
        z=fun(s, 0, '0');

         if (z != -1)
        {
            tempans += z;
            ll y = fun(s, z+1, '5');
            if (y != -1)
            {
                ans = min(ans, z + y - z - 1);
            }

            // for 0
            // dbg(z);
          y = fun(s, z+1, '0');
        //   dbg(y);
          
            if (y != -1)
            {
                // dbg(tempans);
                // dbg(y);
                // dbg(z);
                ans = min(ans, z + y - z - 1);
                // dbg(tempans + y - z - 1);
            }
           
        }
        cout << ans << endl;
    }
    return 0;
}