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

    // tc(t)

    getline(cin, s);
 
        map<string, int> map;
        map["one"] = 1;
        map["two"] = 2;
        map["three"] = 3;
        map["four"] = 4;
        map["five"] = 5;
        map["six"] = 6;
        map["seven"] = 7;
        map["eight"] = 8;
        map["nine"] = 9;
        map["zero"] = 0;
        string ans = "";
        string space_delimiter = " ";
    vector<string> words{};
    size_t pos = 0;
    while ((pos = s.find(space_delimiter)) != string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + space_delimiter.length());
    }
 words.pb(s);
    // print_array(words);

        for (int i = 0; i < words.size(); i++)
        {
            s=words[i];
            if (s == "double")
            {
               i++;
               s= words[i];
                ans += '0' + map[s];
                ans += '0' + map[s];
            }
            else if (s == "triple")
            {
              i++;
               s= words[i];
                ans += '0' + map[s];
                ans += '0' + map[s];
                ans += '0' + map[s];
            }
            else
            {
                ans += '0' + map[s];
            }
        }
        cout << ans << endl;

    return 0;
}