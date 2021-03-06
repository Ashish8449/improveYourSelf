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
        cin >> n;
        vl va(n), vb(n);
        input_array(va);
        input_array(vb);
        ll indxa = -1, indxb = -1;
        ll ans = 0, temp = INT64_MAX;
        for (int i = 0; i < n; i++)
        {
            if (temp > abs(va[0] - vb[i]))
            {
                indxa = i;
                temp = abs(va[0] - vb[i]);
            }
        }
        ans += temp;
        temp = INT64_MAX;
        for (int i = n - 1; i >= 0; i--)
        {
            if (temp > abs(va[n - 1] - vb[i]))
            {
                indxb = i;
                temp = abs(va[n - 1] - vb[i]);
            }
        }
        ans += temp;
        ll add = 0;
      ll indxb0, indxbn;
        if (min(indxb, indxa) != 0)
        {
            temp = INT64_MAX;
            for (int i = 0; i < n; i++)
            {
                if (temp > abs(va[i] - vb[0]))
                {
                    indxb0=i;
                    
                    temp = abs(va[i] - vb[0]);
                }
            }
            add = temp;
        }
        ll addn = 0;
        if (max(indxb, indxa) != n - 1)
        {
            temp = INT64_MAX;
            for (int i = n - 1; i >= 0; i--)
            {
                if (temp > abs(vb[n - 1] - va[i]))
                {
                    indxbn=
                    temp = abs(vb[n - 1] - va[i]);
                }
            }
            addn = temp;
        }
       
       if( indxb0== n-1 || indxb0== n-2)
        cout << ans + +add + addn << endl;
    }
    return 0;
}