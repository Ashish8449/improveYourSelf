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
#define mod ll(1e9+7)
ll fac(ll n){
    ll ans=1;
    for (ll i = 1; i < n+1; i++)
    {
        ans*=i;
        ans%=mod;
    }
    return ans;
    

}

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
tc(t){
map<ll,ll>map;
ll x=ll(pow(2,32))-1;
ll n;cin>>n;
vl v(n);
for (ll i = 0; i < n; i++)
{
    ll a;
    cin>>a;
    map[a]++;
    v[i]=a;
    x&=a;

}

// cout<<(1&3)<<endl;
bool flg=0;
// // dbg(x);
for (ll i = 0; i < n; i++)
{
    if((x&v[i])!=x){
        cout<<v[i]<<" "<<i<<endl;
        flg=1;
        break;

    }
}
// for (ll i = 0; i < n; i++)
// {
//     cout<<v[i]<<" ";
// }
// cout<<endl;
// // dbg(flg);
if(flg||map[x]<2)cout<<0<<endl;
else {
    cout<<(((map[x]*(map[x]-1))%mod)*fac(n-2))%mod<<endl;
}






}



     
return 0;
}