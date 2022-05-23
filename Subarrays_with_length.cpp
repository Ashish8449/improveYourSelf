// #include <iostream>
// #define dbg(x) cout << #x << " = " << x << endl
// using namespace std;

// int func(int i, int n, int arr[])
// {
//     int ans = 0;
//     if (i >= arr[i])
//     {

//         if (n - i - 1 >= arr[i] - 1)
//         {
//             ans += arr[i];
//         }
//         else
//         {
//             // ans+=((arr[i]-1) - (n-i-1));
//             ans += n - i;
//         }
//     }

//     else
//     {
//         if (n - i - 1 >= arr[i] - 1)
//         {
//             ans += i + 1;
//         }
//         else
//         {
//             if (n < arr[i])
//             {
//                 ans += 0;
//             }
//             else
//             {
//                 ans += (n - arr[i] + 1);
//             }
//         }
//     }

//     return ans;
// }

// int main()
// {

//     freopen("input.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
//     freopen("output.txt", "w", stdout);

//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int arr[n];
//         int check[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             check[arr[i]] = -1;
//         }

//         int ans = 0;

//         for (int i = 0; i < n; i++)
//         {

//             if (check[arr[i]] < 0)
//             {
//                 ans += func(i, n, arr);
//                 check[arr[i]] = i;
//             }
//             else
//             {
//                 int j = check[arr[i]];
//                 if (i - j - 1 >= arr[i] - 1)
//                 {
//                     ans += func(i, n, arr);
//                 }
//                 else
//                 {

//                     if (n >= j + arr[i])
//                     {
//                         ans += ((i - j) - 1);
//                     }
                  

//                     else
//                     {
                       
//                         ans += 0;
//                     }
//                 }

//                 check[arr[i]] = i;
//             }
//             // cout<<ans<< "  " <<i<<endl;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// // /*
// // *
// // *************************************************************
// // * AUTHOR : Ashish Gururani                                  *
// // * Language: C++14                                           *
// // * Purpose: -                                                *
// // * IDE used: Visual Studio Code.                             *
// // *************************************************************
// // *
// // Comments will be included in practice problems if it helps ^^
// // */
// // #include <bits/stdc++.h>
// // typedef long long ll;
// // typedef long double ld;
// // #define rep(i, n, k) for (ll i = 0; i < n; i += k)
// // #define rrep(i, n, k) for (ll i = n; i >= 0; i -= k)
// // #define rep1(i, n, k) for (ll i = 1; i < n; i += k)
// // #define vi vector<int>
// // #define vl vector<ll>
// // #define vs vector<string>
// // #define vvi vector<vi>
// // #define vvl vector<vl>
// // #define vvs vector<vs>
// // #define mem(a, b) memset(a, b, sizeof(a))
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);                    \
// //     cout.tie(NULL)
// // #define pb emplace_back
// // #define mp make_pair
// // #define fi first
// // #define se second
// // #define endl "\n"
// // #define tc(t)    \
// //     long long t; \
// //     cin >> t;    \
// //     while (t--)
// // #define all(x) (x).begin(), (x).end()

// // #define dbg(x) cout << #x << " = " << x << endl
// // #define inf 1e6 + 5
// // #define mod ll(1e9 + 7)
// // using namespace std;

// // template <typename T>
// // void print_array(const T &arr, char c = ' ')
// // {
// //     for (auto x : arr)
// //     {
// //         cout << x << c;
// //     }
// //     cout << endl;
// // }

// // template <typename T>
// // void input_array(vector<T> &arr)
// // {
// //     for (ll i = 0; i < arr.size(); i++)
// //     {
// //         cin >> arr[i];
// //     }
// // }

// // vvl adj;
// // vl vis;
// // int main()
// // {
// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("error.txt", "w", stderr);
// //     freopen("output.txt", "w", stdout);
// // #endif
// //     fast;
// //     ll a, b, c, d, e, f, m, n, p, q;
// //     string s, r;

// //     tc(t)
// //     {
// //         cin >> n;
// //         vl v(n);
// //         input_array(v);
// //         map<ll, ll> map;
// //         for (int i = 0; i < n - 1; i++)
// //         {
// //             map[i] = -1;
// //         }

// //         ll ans = 0;
// //         for (int i = 0; i < n; i++)
// //         {
// //             a = max(0LL, i - v[i] + 1);
// //             if (map[v[i]] > -1)
// //             {
// //                 a = max(map[i]+1, a);
// //                 dbg(i);
// //             }
// //             b = n - 1 - i;

// //             ll difa = i - a;

// //           dbg(i);
// //           dbg(difa);

// //             // if(i==3)dbg(ans);
// //             map[v[i]] = i;

// //         }

// //         cout << ans << endl;
// //     }
// //     return 0;
// // }


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
typedef long             long ll;
typedef long             double ld;
#define rep(i,n,k)       for(ll i=0;i<n;i+=k)
#define rrep(i,n,k)      for(ll i=n;i>=0;i-=k)
#define rep1(i,n,k)      for(ll i=1;i<n;i+=k)
#define vi               vector<int>
#define vl               vector<ll>
#define vs               vector<string>
#define vvi              vector<vi>
#define vvl              vector<vl>
#define vvs              vector<vs>
#define mem(a,b)         memset(a,b,sizeof(a))
#define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb               emplace_back
#define mp               make_pair
#define fi               first
#define se               second
#define endl          "\n"
#define tc(t)            long long t;cin>>t;while(t--)
#define all(x)           (x).begin(), (x).end()

#define dbg(x)           cout<<#x<<" = "<<x<<endl
#define inf                 1e6+5
#define mod              ll(1e9+7)
using namespace std;

template<typename T>
void print_array(const T &arr, char c = ' ')
{
for (auto x : arr)
{
cout << x << c;
}
cout << endl;
}

template<typename T>
void input_array(vector< T> &arr)
{
for (ll i = 0; i < arr.size(); i++)
{
cin>>arr[i];
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
ll a, b,c,d,e,f,m,n,p,q;
string s,r;

//tc(t)
{
     vl v(n);
     
    
}
return 0;
}
