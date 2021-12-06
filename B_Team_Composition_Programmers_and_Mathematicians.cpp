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
ll func(ll &a, ll &b, ll firstNum, ll secondeNUm)
{
    ll count = min(a / firstNum, b / secondeNUm);
    a -= count * firstNum;
    b -= count * secondeNUm;
    return count;
}
ll solve( ll a, ll b) {
  
    return min(min(a, b), (a + b) / 4);
    // cout << min(min(a, b), (a + b) / 4) << '\n';
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
    vector<pair<int, int>> v;
    v.pb(mp(1, 3));
    v.pb(mp(3, 1));
    v.pb(mp(2, 2));
    tc(t)
    {   
        // srand(time(0));
        //  a= rand()%100;
        //  b= rand()%100;
        cin >> a >> b;
        
        sort(all(v));
        ll numa = a,
           numb = b;
        ll ans = 0;
        do
        {
      
            ll temans = 0;
            for (ll i = 0; i < 3; i++)
            {
                temans += func(a, b, v[i].first, v[i].second);
                // dbg(v[i].first);
                cout << v[i].first << " " << v[i].second << " ";
                // dbg(v[i].second);
                // cout << a << " *********" << b << endl;
            }
            cout << endl;

            dbg(temans);
            ans = max(ans, temans);
            a = numa, b = numb;

        } while (next_permutation(all(v)));
        if(ans!=solve(a, b)){
            dbg(ans);
            dbg(solve(a, b));
                        cout<<a<<" "<<b<<endl;
        }
        // cout << ans << endl;
    }
    return 0;
}