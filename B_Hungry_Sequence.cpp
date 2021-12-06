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
#define inf 1e7+5
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
     
 vl seive(1e7+5,1);

seive[1]=0,seive[0]=0;
for(ll i=2; i*i<=inf;i++)
{
 if(seive[i]==1)
for(ll j=i*i;j<inf; j+=i)
{
 seive[j]=0;
}}
vl ans;
for (ll i = 0; i < inf; i++)
{
    if(seive[i])ans.pb(i);
}
// cout<<ans.size();
ll n;
cin>>n;

for (ll i = 0; i < n; i++)
{
    cout<<ans[i]<<" ";
}



return 0;
}