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
#define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb               push_back
#define mp               make_pair
#define fi                first
#define se                second
#define tc(t)            long long t;cin>>t;while(t--)
#define all(x)           (x).begin(), (x).end()
#define dbg(x)           cout<<x<<" = "<<x<<endl
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
//brute force:
// vl ans;
// void solve(ll n, ll a,ll b,ll c,ll z){
//     if(n<=0){
//         if(n==0){
//             ans.pb(z);
//         }
//         return;
//     }
//     solve(n-a,a,b,c,z+1);
//     solve(n-b,a,b,c,z+1);
//     solve(n-c,a,b,c,z+1);
//     return;

// }
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
 ll n, a,b,c;
 cin>>n>>a>>b>>c;
//  brute: force:
//  if(a==1||b==1||c==1){
//      cout<<n<<endl;
//  }else{
//      solve(n,a,b,c,0);
//      cout<<*max_element(ans.begin(),ans.end())<<endl;
//  }
vl ans(n+5+4000,0);
for (ll i = 0; i <=n ; i++)
{
    if(ans[i]||i==0){
    ans[i+a]=max(ans[i]+1,ans[i+a]);
    // if(a!=b)
    ans[i+b]=max(ans[i]+1,ans[i+b]);
    // if(a!=c&&b!=c)
    ans[i+c]=max(ans[i]+1,ans[i+c]);
    }
}
// print_array(ans,'\n');
cout<<ans[n]<<endl;

return 0;
}