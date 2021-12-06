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
#define mod ll(1e9 + 1)
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

    // vl seive(inf, 1);

    // seive[1] = 0, seive[0] = 0;

    // for (ll i = 2; i * i <= inf; i++)
    // {
    //     if (seive[i] == 1)
    //         for (ll j = i * i; j < inf; j += i)
    //         {
    //             seive[j] = 0;
    //         }
    // }
    // vl prime;
    // for (ll i = 0; i < inf; i++)
    // {
    //     if (seive[i])
    //         prime.pb(i);
    // }
    // print_array(prime,'\n');

    tc(t)
    {

        cin >> n >> a >> b;
        ll evenfac = 0, oddfac = 0;
        ll i = 2;
        ll x = n;
        while (n != 1 && i * i <= x)
        {
            if (n % i == 0)
            {
                if (i == 2)
                    evenfac++;
                else
                    oddfac++;
                n = n / i;
            }
            else
                i++;
        }
        if (n > 1)
        {
            if (n % 2)
                oddfac++;
            else
                evenfac++;
        }
        // dbg(evenfac);
        // dbg(oddfac);
        // dbg(i);

        // for (ll i = 2; i*i <= n; i++)
        // {
        //     if(n%i==0){
        //         if(i==2)
        //         evenfac++;
        //         else oddfac++;
        //         i--;
        //         n=n/i;
        //     }

        // }
        //     dbg(evenfac);
        // dbg(oddfac);

        ll ans = 0;
        if (a >= 0 && b >= 0)
        {
            ans += a * evenfac;
            ans += b * oddfac;
        }
        else if (a >= 0 && b < 0)
        {
            // dbg(oddfac);
            if (a>=0 &&evenfac)
            {
                ans = a * evenfac;
                // dbg(ans);
            }
            else if (oddfac)
                ans = b;
            // dbg(ans);
        }
        else if (a < 0 && b >= 0)
        {
            ans += b * oddfac;
            if (evenfac > 0)
                ans += a;
        }
        else
        {
            if (x % 2)
                ans = b;
            else
                ans = a;
        }
        cout << ans << endl;
    }
    return 0;
}