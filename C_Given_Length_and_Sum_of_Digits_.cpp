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
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
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
        ll sum;
        cin >> n >> sum;
        a = sum;
        bool flgs = 0;
        //small number:
        vl sm(n);
        if (a <= 0)
            flgs = 1;
        sm[n - 1] = 1;
        a--;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a >= 9)
            {
                sm[i] = 9;
                a -= 9;
            }
            else
                sm[i] = a, a = 0;
        }
        if (a < 9)
            sm[n - 1] += a;
        else
            flgs = -1;
       b=sum;
        //maximum number:
        vl vb(n);
        bool flgb = 0;
        if (sum <= 0)
            flgb = 1;
        for (ll i = 0; i < n; i++)
        {
            if (sum >= 9)
                vb[i] = 9, sum -= 9;
            else
                vb[i] = max(ll(0), sum), sum = 0;
        }
        if (sum)
            flgb = -1;
        if(n==1&&b==0)cout<<0;
      else    if (flgs)
            cout << -1;
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << sm[i];
            }
        }
        cout << " ";
          if(n==1&&b==0)cout<<0;
      else if (flgb)
            cout << -1;
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << vb[i];
            }
        }
    }
    return 0;
}