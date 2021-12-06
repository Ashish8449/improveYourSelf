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

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
 vl seive(1e6+5,1);

seive[1]=0,seive[0]=0;
for(ll i=2; i*i<=inf;i++)
{
 if(seive[i]==1)
for(ll j=i*i;j<inf; j+=i)
{
 seive[j]=0;
}
}
vl prime;
for (ll i = 2; i < 1e6; i++)
{
    if(seive[i])prime.pb(i);
}

ll n,m;
cin>>n>>m;
vector<vl>v,to;
for (ll i = 0; i < n; i++)
{
    vl p(m);
    for (ll j = 0; j < m; j++)
    {
        cin>>p[j];
    }
    v.pb(p);
    to.pb(p);
    
}
for (ll i = 0; i < m; i++)
{
     vl p;
    for (ll j = 0; j < n; j++)
    {
        p.pb(v[j][i]);
        
    }
    to.pb(p);
    
}
ll ans=INT64_MAX;
for (ll i = 0; i < to.size(); i++)
{ ll tem=0;
    for (ll j = 0; j < to[i].size(); j++)
    {
        ll k=lower_bound(prime.begin(),prime.end(),to[i][j])-prime.begin();
        tem+=abs(prime[k]-to[i][j]);
    }
    ans=min(ans, tem);
    
}
cout<<ans<<endl;



     
return 0;
}