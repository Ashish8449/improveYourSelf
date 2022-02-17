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

    fast;
    ll a, b, c, d, e, f, m, n, p, q;
    string s, r;
    int testcase = 0;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++)
    {
        cin >> n;
        vl v(n);
        vl ans(n);
        multiset<int> multi_set;
        ll h_index = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= h_index)
            {
                multi_set.insert(v[i]);
            }
            auto indx = multi_set.lower_bound(h_index + 1);

            multi_set.erase(multi_set.begin(), indx);

            if (multi_set.size() > h_index)
            {
                h_index++;
            }

            ans[i] = h_index;
        }
        cout<<"Case #"<<t<<": ";
        print_array(ans);
    }

    return 0;
}