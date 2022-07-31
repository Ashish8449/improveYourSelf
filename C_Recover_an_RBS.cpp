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
        int open = 0, close = 0, qus = 0;
        cin >> s;
        if (s == "?)" || s == "(?" || s == "??")
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                close++;
            if (s[i] == '?')
                qus++;
            if (s[i] == '(')
            {
                close--;
            }
        }
        bool flg = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (i == 0 && s[i] == '?')
            {
                s[i] == '(';
            }

            if (s[i] == '?')
            {
                qus--;
                if (close - qus > 0)
                    s[i] = '(';
                else if (close + qus < 0)
                    s[i] = ')';
                else
                {
                    flg = 0;
                    break;
                }
            }

            if (s[i] == ')')
                close--;

            if (s[i] == '(')
            {
                close++;
            }
        }
        if (flg)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // dbg(s);
    }
    return 0;
}