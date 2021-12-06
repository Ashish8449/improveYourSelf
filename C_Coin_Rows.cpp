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

    tc(t)
    {
        cin >> m;
        vector<vl> v(2, vl(m, 0));
        input_array(v[0]);
        input_array(v[1]);
        vl pre1(m, 0);
        vl pre2(m, 0);
        v[0][0] = 0;
        v[1][m - 1] = 0;
        pre1[m - 1] = v[0][m - 1] + v[1][m - 1];
        pre2[m - 1] = v[1][m - 1];
        //  cout<<'y'<<endl;
        for (int i = m - 2; i >= 0; i--)
        {
            pre1[i] += pre1[i + 1] + v[0][i];
            pre2[i] += pre2[i + 1] + v[1][i];
        }
      pre1.pb(0);
      pre2.pb(0);
        ll i = 0;

        while (pre1[i + 1] > pre2[0] -pre2[i+1]&& i < m - 1)
        {
            v[0][i + 1] = 0;
            i++;
        }
        
      ll  ans=max(pre2[0]-pre2[i], pre1[i+1]);
      
        //  dbg(i);
        // while (i < m)
        // {
        //     v[1][i] = 0;
        //     i++;
        // }
        // pre1[m - 1] = v[0][m - 1];
        // pre2[m - 1] = v[1][m - 1];

        // for (int i = m - 2; i >= 0; i--)
        // {
        //     pre1[i] = pre1[i + 1] + v[0][i];
        //     pre2[i] = pre2[i + 1] + v[1][i];
        // }
        // ll ans = 0;

        // i = 0;
        // ans=max(pre1[0],pre2[0]);

        // // while (pre1[i + 1] > pre2[i] && i < m - 1)
        // // {
        // //     ans += v[0][i + 1];
        // //     i++;
        // // }

        // // while (i < m)
        // // {
        // //     ans += v[1][i];
        // //     i++;
        // // }
      if(m==1)cout<<0<<endl;
      else 
        cout << ans << endl;
    }
    return 0;
}