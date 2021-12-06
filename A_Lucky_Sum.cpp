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
vl v;
void solve(ll i,ll a){
 if(i>=11){
     return;
 }
 if(a)
 v.pb(a);
//  cout<<a<<endl;
 solve(i+1,a*10+4);
 solve(i+1,a*10+7);


 

}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll l,r;
cin>>l>>r;
solve(0,0);
sort(all(v));
// print_array(v,'\n');
ll ans=0;
while (l<=r)
{
    // dbg('d');
   ll i= lower_bound(v.begin(),v.end(),l)-v.begin();
//    cout<<v[i]<<endl;
   if(v[i]<=r){
    ans+=(v[i]-l+1)*v[i];
    l=v[i]+1;
   }else {
       ans+=(r-l+1)*v[i];
       l=r+1;
   }
}
cout<<ans<<endl;


return 0;
}