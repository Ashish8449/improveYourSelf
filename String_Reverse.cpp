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
ll solve(string orig)
{
    string str;

    str = orig;

    reverse(str.begin(), str.end());

    int cnt = 0, n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (orig[i] == str[cnt])
            cnt++;
    }
    return n - cnt;
}
bool is_palindrome(string s)
{
    ll len = s.length();
    for (ll i = 0; i < len; i++)
    {
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}
ll solve1(string s)
{

    ll n = s.length();
    ll count = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            count++;
        }
        else
            break;
    }
    ll num = 0;
    if (count == n)
    {
        // cout << 0 << '\n';
        return 0;
    }
    ll last = s[n - count - 1];
    // for(ll i = n-count-1; i>= count; i--){
    //     if(s[i]==last) num++;
    //     else break;
    // }
    for (ll i = count; i <= n - count - 1; i++)
    {
        if (s[i] == last)
        {
            if (is_palindrome(s.substr(i, n - count - i)))
            {
                num = i - count;
                break;
            }
        }
    }
    ll ans = count + num;
    return ans;
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
        s = "";
        for (int i = 0; i < rand() % 10; i++)
        {
            s += 'a' + rand() % 25;
        }
        if (solve(s) != solve1(s))
        {
            cout << s << endl;
            ll ans = solve(s);
            dbg(solve1(s));
            dbg(ans);
            break;
        }
    }
    return 0;
}