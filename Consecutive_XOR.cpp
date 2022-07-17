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

    tc(t)
    {
        ll n;
        string a, b;
        cin >> n >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            vl ones;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == '1')
                    ones.pb(i);
            }
            ll indx = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == b[i])
                {
                    dbg(i);
                    continue;
                }
                else
                {
                    if (indx == ones.size())
                    {
                        break;
                    }
                    for (int j = i; j <= ones[indx]; j++)
                    {
                        a[j] = '1';
                    }
                    for (int j = 0; j < ones[indx]; j++)
                    {
                        if(b[j]=='1'){

                        }else{
                            if(j<n){
                                char x= (a[j]-'0')^(a[j+1]-'0');
                                
                                a[j]= '0'+x;
                                a[j+1]='0'+x;

                            }else{
                                break;
                            }
                        }
                    }
                }
                dbg(a);
            }
            dbg(a);
            dbg(b);
            if(a==b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}