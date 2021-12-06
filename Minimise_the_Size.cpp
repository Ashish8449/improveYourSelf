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
        bitset<64> bitn(n);
        // cout << bitn[0] << endl;
        vl ans;
        vector<bitset<64>> v;
        c = 0;
        // v.push_back(bitset<64>(0));
        for (int i = 64 - 1; i >= 0; i--)
        {
            // dbg(i);
            // dbg(bitn[i]);
            if (bitn[i] == 0 && v.size() == 0)
            {
                continue;
            }
            else if (c == 0)
            {
                c++;
                v.push_back(bitset<64>((1 << i + 1) - 1));
                ans.push_back((1 << i + 1) - 1);
                // cout << (1 << i+1) - 1 << endl;
                // dbg(i);
            }

            int bt = 0;
            for (ll j = 0; j < v.size(); j++)
            {
                bt ^= v[j][i];
            }

            if (bitn[i] == bt)
            {
                continue;
            }
            else
            {
                v.push_back(bitset<64>((1 << i) - 1));
                ans.push_back((1 << i + 1) - 1);
            }
        }
        // for (ll i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << endl;
        // }

        if (ans.empty())
        {
            cout << 1 << endl;
            cout << 0 << endl;
        }
        else
        {
            cout << ans.size() << endl;

            print_array(ans);
        }
    }
    return 0;
}