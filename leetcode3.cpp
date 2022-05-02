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
string removeDigit(string number, char digit)
{
    vector<string> v;
    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] == digit)
        {

            v.push_back(number.substr(0, i) + number.substr(i + 1));
        }
    }
    sort(v.begin(), v.end());
    return v[v.size() - 1];
}
int minimumCardPickup(vector<int> &cards)
{
    map<int, int> map;
    int n = cards.size();
    long long ans = INT64_MAX;
    for (int i = 0; i < n; i++)
    {

        if (map[cards[i]])
        {
            ans = min(ans, i - map[cards[i]] - 1LL);
            cout << i << " " << map[cards[i]] << endl;
            map[cards[i]] = i + 1;
        }
        else
        {
            map[cards[i]] = i + 1;
        }
    }

    if (ans == INT64_MAX)
        return -1;
    return ans;
}

int countDistinct(vector<int> &nums, int k, int p)
{
    int ans = 0;
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        int count = 0;
        for (int j = i ; j < n ; j++)
        {
           
                v.push_back(nums[j]);
                if (nums[j] % p == 0)
                    count++;

                
         

            if (count <= k)
            {

                st.insert(v);
            }
            else
            {
                break;
            }
        }
    }
    return st.size();
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

    // tc(t)
    {
        vi v(5);
        input_array(v);
        ll k;
        cin >> k >> p;

        cout << countDistinct(v, k, p) << endl;
    }
    return 0;
}