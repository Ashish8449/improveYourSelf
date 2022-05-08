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
        map<char, int> map;
        cin >> s;
        n = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                map['1'] = i + 1;
            }
            else if (s[i] == '0')
            {
                if (map['1'])
                {
                    map['0'] = i + 1;
                    break;
                }
                else
                {
                    map['0'] = i + 1;
                }
            }
        }
        ll ans = 0;

        if (map['1'] && map['0'])
        {

            ans = map['0'] - map['1'] + 1;
            dbg(ans);
            dbg(map['1']);
            dbg(map['0']);
            for (int i = map['0']; i < s.length(); i++)
            {
                if (s[i] != '0')
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
            for (int i = map['1'] - 2; i >= 0; i--)
            {
                /* code */
                if (s[i] != '1')
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        else if (map['1'])
        {
            ans = n - map['1'] + 1;
            for (int i = map['1'] - 2; i >= 0; i--)
            {
                /* code */
                if (s[i] != '1')
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        else if (map['0'])
        {
            ans = n - map['0'] + 1;
            for (int i = map['0'] - 2; i >= 0; i--)
            {
                /* code */
                if (s[i] != '0')
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            ans = s.length();
        }
        cout << ans << endl;
    }
    return 0;
}