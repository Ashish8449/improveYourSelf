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
        vl v(n);
        input_array(v);
        cin >> s;
        ll check = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                check = 0;
                break;
            }
        }

        if (check)
        {
            cout << 0 << endl;
        }
        else
        {
            if (s[0] != s[n - 1])
                cout << 1 << endl;
            else
            {
                bool flg = 0;
                char ch = s[0];

                ll indx = 1;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] != ch)
                    {

                        indx = i;
                        flg = 1;
                        break;
                    }
                }
                if (flg)
                {
                    vl tem = v;
                    ll ans = 2;

                    ll check = 0;
                    // dbg(indx);
                    sort(v.begin() + indx, v.end());
                    // print_array(v);
                    for (int i = 1; i < n; i++)
                    {
                        if (v[i] < v[i - 1])
                        {
                            check = 1;
                            break;
                        }
                    }
                    ll dif = check;
                    v = tem;
                    // print_array(v);
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] != ch)
                        {

                            indx = i;
                            flg = 1;
                        }
                    }

                    sort(v.begin(), v.begin() + indx + 1);
                    // print_array(v);
                    check = 0;

                    for (int i = 1; i < n; i++)
                    {
                        if (v[i] < v[i - 1])
                        {
                            check = 1;
                            break;
                        }
                    }
                    // dbg(check);
                    dif = min(dif, check);

                    cout << ans - (!dif) << endl;
                }
                else
                    cout << -1 << endl;
            }
        }
    }
    return 0;
}