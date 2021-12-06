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
// //         ll odd = 0;
// //         for (ll i = 0; i < n; i++)
// //         {
// //             if (v[i] & 1)
// //                 odd++;
// //         }
// //         cout << odd / 2 << endl;
// //     }
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void doit(){
//     int n; cin>>n;
    
//     vector<string> ans;
//     string cnt="";

//     map<string,int> mp;

//     for(int i=0;i<n;i++){
//         cnt+='0';
//     }

//     ans.push_back(cnt);
//     string final = cnt;
//     mp[final] = 1;

//     while(ans.size() != pow(2,n)){
//         string curr =  final;

//         for(int i=0;i<final.size();i++){
//             if(curr[i]=='0'){
//                 curr[i]='1';
//             }
//             else{
//                 curr[i]='0';
//             }

//             if(mp.find(curr) == mp.end()){
//                 final =curr;
//                 ans.push_back(curr); 
//                 mp[final]=1;
//                 break;
//             } 
//             if(curr[i]=='0'){
//                 curr[i]='1';
//             }
//             else{
//                 curr[i]='0';
//             }

//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;                            
//     }
// }
// int main()
// {
//     #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false); 
//     cin.tie(NULL); 
//     cout.tie(NULL);
//     int test=1; 
//     // cin>>test;
//     while(test--)
//     {
//       doit();
//     }

//     cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
//     return 0;
// }

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
     
     if(1==SOH)cout<<"yes";
}
return 0;
}