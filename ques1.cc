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
ll ans1 = INT64_MAX;
ll getans(vl &v, vl &s1, vl &s2, vl &s3, ll i)
{
    // print_array(s1);
    //     print_array(s2);
    //     print_array(s3);
    if (i == v.size())
    {
        // // base case
        vl ans(3);
        ans[0] = accumulate(all(s1), 0);
        ans[1] = accumulate(all(s2), 0);
        ans[2] = accumulate(all(s3), 0);
        sort(all(ans));

        ll temans = (abs(ans[0] - ans[1]) + abs(ans[0] - ans[2]) + abs(ans[1] - ans[2]));
        //    dbg(temans);
        ans1 = min(ans1, temans);
        return ans1;
    }
    s1.pb(v[i]);
    ll a = getans(v, s1, s2, s3, i + 1);
    s1.pop_back();
    s2.pb(v[i]);
    ll b = getans(v, s1, s2, s3, i + 1);
    s2.pop_back();
    s3.push_back(v[i]);
    ll c = getans(v, s1, s2, s3, i + 1);
    s3.pop_back();
    return min(a, min(b, c));
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
        // cout << "yes";
        input_array(v);
        vl s1, s2, s3;
       cout<< getans(v, s1, s2, s3, 0)<< endl;
        
    }
    return 0;
}