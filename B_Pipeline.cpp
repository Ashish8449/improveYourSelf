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
        ll k;
        cin >> n >> k;
        if( n==1)cout<<0<<endl;
        else if(n<=k)cout<<1<<endl;
        else if( (k*(k+1))/2 -k+1<n)cout<<-1<<endl;
        else {
            ll start =0, end =k;
            while(start+1<end){
                ll mid = (start + end)/2;
                ll a = k- mid;
                bool check= ((a*(2*k-(a-1)))/2 -a +1 )< n;
                if(check)end=mid;
                else start= mid;
                // dbg(mid);
            }
            // dbg(end);
             a = k- end;
             ll dif= n- ((a*(2*k-(a-1)))/2 -a +1 );
            //  cout<<(a*(2*k-(a-1)))/2<< endl;
            // dbg(a);
             if(dif==0)cout<<a<<endl;
             else if(dif<=end)cout<<a+1<<endl;
             else {
                 cout<<-1<<endl;
             }
            //  dbg(dif);
        }
    }
    return 0;
}