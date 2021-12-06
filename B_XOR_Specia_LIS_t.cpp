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


int lis(vl arr, int n)
{
    int lis[n];

    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] >= arr[j] && lis[i] <= lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    // Return maximum value in lis[]
    return *max_element(lis, lis + n);
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
        input_array(v);
        dbg(lis(v, n));
        // cout<<<<endl;
        if (n % 2)
        {
            ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
           
            for (ll i = 0; i < n; i++)
            {
               
                vl tem;
                a=i;
                if(cnt2==0)
                while (lis(tem, tem.size())   2 && i < n)
                {
                    tem.push_back(v[i]);
                    i++;
                }
                if (i < n && (i-a)%2==0)
                    cnt2++;

            } 
            
             for (ll i = 0; i < n; i++)
            {
               
                vl tem;
             
                while (lis(tem, tem.size()) != 2 && i < n)
                {
                    tem.push_back(v[i]);
                    i++;
                }
                if (i < n)
                    cnt3++;

            }
         
            dbg(cnt3);
            if(cnt2%2==0||cnt3%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}