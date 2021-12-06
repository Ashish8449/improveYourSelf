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
#define inf 1e6+5
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
     ll n;
     cin>>n;
     vl v1, v2 ,v3, c(n);
     rep(i,n,1)cin>>c[i];
     for (ll i = 0; i < n; i++)
     {
         ll t;
         cin>>t;
         if(t==1)v1.pb(c[i]);
         if(t==2)v2.pb(c[i]);
         if(t==3)v3.pb(c[i]);
     }
     sort(all(v1));
     sort(all(v2));
     sort(all(v3));
     ll ans=INT64_MAX;
     if(v3.size()){
         ans=v3[0];

     }
     if(v2.size()&&v1.size()){
         ans=min(ans, v2[0]+v1[0]);
     }
     cout<<ans<<endl;
     
return 0;
}