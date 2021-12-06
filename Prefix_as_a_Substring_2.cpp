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
int Substr(string s2, string s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for (; i < s1.length(); i++)
    {
        if (counter == s2.length())
            break;
        if (s2[counter] == s1[i])
        {
            counter++;
        }
        else
        {
            // Special case where character preceding the i'th character is duplicate
            if (counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length() ? -1 : i - counter;
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
        string s1, s2, x;
        cin >> s1 >> s2 >> x;
        ll ans = 0;
        // vl v(26, 0);
        // for (ll i = 0; i < x.length(); i++)
        // {
        //     v[x[i] - 'a']++;
        // }
        // vl mark(26, 1);
        // for (ll i = 0; i < s1.length(); i++)
        // {
        //     if (v[s1[i] - 'a'] && mark[s1[i] - 'a'])
        //     {
        //         mark[s1[i] - 'a'] = 0;
        //         ans++;
        //     }
        // }
        // dbg(ans);
        // for (ll i = 0; i < 26; i++)
        // {
        //     mark[i] = 1;
        // }

        // for (ll i = 0; i < s2.length(); i++)
        // {
        //     // dbg(v[s2[i] - 'a']);
        //     // dbg(mark[s2[i] - 'a']);
        //     if (v[s2[i] - 'a'] && mark[s2[i] - 'a'])
        //     {
        //         mark[s2[i] - 'a'] = 0;
        //         ans++;
        //     }
        // }
        // dbg(ans);
        map<pair<string, string>, int> map;
        for (ll i = 0; i <= s1.length(); i++)
        {
            s = s1.substr(0,i);
            
            for (ll j = 0; j <= s2.length(); j++)
            {
                string z = s2.substr(0, j );
                
                if (Substr(s+z, x) != -1 && map[mp(s, z)] == 0)
                {
                    ans++;
                    map[mp(s, z)]++;
                }
                else if (map[mp(s, z)])
                {
                    continue;
                }
                else
                {
                    break;
                }
                
            }
        }
        cout << ans << endl;
    }
    return 0;
}