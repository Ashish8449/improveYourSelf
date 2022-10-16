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

bool isTouch(pair<int, int> p, int rh, int rs)
{
    double le = sqrt(p.first * p.first + p.second * p.second);
    return (le - rs) <= rh;
}

bool isClose(pair<int, int> p1, pair<int, int> p2, int rs)
{
    ll disx = (p1.first - p2.first), disy = (p1.second - p2.second);

    double dis = sqrt(disx * disx + disy * disy);

    return dis < 2 * rs;
}

void howmanyremoved(vector<pair<int, int>> &v, pair<int, int> p, int rs)
{
    vector<pair<int, int>> vleft;
    for (int i = 0; i < v.size(); i++)
    {
        if (isClose(v[i], p, rs))
        {
        }
        else
        {
            vleft.push_back(v[i]);
        }
    }

        v.erase(v.begin(), v.end());
        for (int i = 0; i < vleft.size(); i++)
        {
            v.push_back(vleft[i]);
        }

    
}
int main()
{
  

    ll a, b, c, d, e, f, m, n, p, q;
    string s, r;

    // tc(t)
    {
        int testcase = 0;
        cin >> testcase;
        for (int t = 1; t <= testcase; t++)
        {
            ll rh, rs;
            cin >> rs >> rh;
            cin >> n;
            vector<pair<int, int>> vr, vy, vrt;
            int ans1 = 0, ans2 = 0;
            for (int i = 0; i < n; i++)
            {
                cin >> a >> b;
                vr.push_back(mp(a, b));

                if (isTouch(mp(a, b), rh, rs))
                {
                    vrt.push_back(mp(a, b));
                    ans1++;
                }
            }
            cin >> m;
            for (int i = 0; i < m; i++)
            {
                cin >> a >> b;
                vy.push_back(mp(a, b));

                if (isTouch(mp(a, b), rh, rs))
                {
                    howmanyremoved(vrt, mp(a, b), rs);
                    
                        ans2++;
                    
                }
            }

            cout << "Case #" << t << ": " << vrt.size() << " " << ans2 << endl;
        }
    }
    return 0;
}