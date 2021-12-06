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
// #include <boost/multiprecision/cpp_int.hpp>
// using boost::multiprecision::cpp_int;
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
#define inf 1e6+5
using namespace std;
bool fun(ll x, ll a,ll b ,ll n){
    if(x>n)return false ;
    if(x==n)return true;
    cout<<x<<endl;
    if(x==x*a) return fun(x+b,a,b,n);
    
    else
    
    return fun(x*a, a, b, n)||fun(x+b,a,b,n);
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
tc(t){
    ll n,a,b;
    cin>>n>>a>>b;
    bool flg=0;
    flg=fun(1,a,b,n);
    
    
    
    
    if(flg)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
     
return 0;
}