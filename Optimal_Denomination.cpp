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
ll gcd(ll a,ll b)       {if(b==0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b)       {return (a*b)/gcd(a,b);}

ll fun(vl v,ll g,ll index){
    ll count=0;
    for (ll i = 0; i < v.size(); i++)
    {   if(i!=index)
        count+=(v[i]/g);
    }
    count++;
    return count;
    

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
    ll n;
    cin>>n;
    vl v(n),f(n+1),b(n+1);
    f[0]=0,b[n]=0;
    ll g=0;
    rep(i,n,1){
        cin>>v[i];
    }
    // sort(all(v));
    rep(i,n,1){
        g=gcd(g,v[i]);
        f[i+1]=g;
    }
    
    ll rg=0;
    for (ll i = n - 1; i >= 0; i--)
    {
        rg=gcd(rg,v[i]);
        b[i]=rg;
    }
    // for (ll i = 0; i <= n; i++)
    // {
    //     cout<<f[i]<<" ";
    //     cout<<b[i]<<endl;
    // }
    
    vector<pair<ll,ll>>gd;
    ll mm=0,index;
    for (ll i = 0; i <n; i++)
    {
        if(v[i]/g>mm){index=i;}
        ll  g_p=gcd(f[i],b[i+1]);
        if(g<g_p){
        gd.pb(mp(g_p,i));
        }
    }
        gd.pb(mp(g,index));
        ll ans=INT64_MAX;
 for (ll i = 0; i < gd.size(); i++)
 {
    //  cout<<gd[i].first<<" "<<gd[i].second<<endl;
     ans=min(ans,fun(v,gd[i].first,gd[i].second));

 }
 cout<<ans<<endl;
 
    
    
    
    
}
     
return 0;
}