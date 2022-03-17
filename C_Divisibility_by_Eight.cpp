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
    {
        cin >> s;
        n = s.length();
        ll sum = 0;
        bool flg = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            // sum += s[i] - '0';
            if((s[i]-'0')%8==0){
                cout<<"YES"<< endl;
                cout<<s[i]<<endl;
                flg=1;
                break;

            }
            for (int j = i - 1; j >= 0; j--)
            {   ll num=0;
                 num = num * 10 + s[j] - '0';
                    num = num * 10 + s[i] - '0';
                                        if (num % 8 == 0)
                    {
                        flg = 1;
                        cout << "YES" << endl;
                        cout << num << endl;
                        break;
                    }
               
                for (int k = j - 1; k >= 0; k--)
                {
                    // dbg(k);
                     num = s[k] - '0';
                    num = num * 10 + s[j] - '0';
                    num = num * 10 + s[i] - '0';

                    if (num % 8 == 0)
                    {
                        flg = 1;
                        cout << "YES" << endl;
                        cout << num << endl;
                        break;
                    }
                    // sum -= s[k] - '0';
                }
                sum -= s[j] - '0';
                if (flg)
                    break;
            }
            sum -= s[i] - '0';
            if (flg)
                break;
        }
        if (!flg)
            cout << "NO"
                 << endl;
    }
    return 0;
}