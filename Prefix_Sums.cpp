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

    tc(t)
    {
        cin >> n;
        vl A, B(n/2);
        bool flg = 1;
        ll sum = (n * (n + 1)) / 2;
        if (sum % 2)
            cout << "NO" << endl;
        else
        {
            cout<<"YES"<<endl;
            ll sum = (n * (n + 1)) / 2;
            ll f = 0, s = (n / 2) - 1;
         
            {

                ll start = 1, end = n;
                bool flag = true;
                while (start <= end)
                {
                    if (flag == true)
                    {
                        flag = false;
                        A.push_back(start);
                        A.push_back(end);
                    }
                    else
                    {
                        flag = true;
                        B[f] = start;
                        f++;
                        B[s] = end;
                        s--;
                    }
                    start++;
                    end--;
                }
               print_array(A);
               print_array(B);
            }
        }

        // print_array(A);
        // print_array(B);

        // dbg(sum);
    }
    return 0;
}