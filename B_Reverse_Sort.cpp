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
#define vl vector<int>
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
        cout << x + 1 << c;
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
        cin >> s;
        r = s;
        sort(all(r));
        vvl v;
        while (s != r)
        {

            vl ans1;
            bool flg = 0;
            int i;
            for (i = n - 1; i >= 0; i--)
            {
                if (flg & s[i] == '1')
                {
                    break;
                }
                if (s[i] == '0')
                    flg = 1;
                ans1.pb(i);
            }
            flg = 0;
            ll count = i;

            vi ansfist;

            for (int i = 0; i <= count; i++)
            {
                if (s[i] == '1')
                    ansfist.pb(i);
                if (ans1.size() <= ansfist.size())
                    break;
            }
            i = 0;
            vl ans;
            for (int i = 0; i < min(ans1.size(), ansfist.size()); i++)
            {
                ans.pb(ansfist[i]);
            }
            for (int i = 0; i < min(ans1.size(), ansfist.size()); i++)
            {
                ans.pb(ans1[i]);
            }

            int j = ans.size() - 1;
            while (i < j)
                swap(s[ans[i++]], s[ans[j--]]);
            // print_array(ans);
            v.pb(ans);
        }
        //  cout<<s<<endl;
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)

        {
            cout << v[i].size() << " ";
            
            print_array(v[i]);
        }
    }
    return 0;
}