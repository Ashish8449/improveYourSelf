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

template<typename T>
void input_array(vector< T> &arr)
{
for (ll i = 0; i < arr.size(); i++)
{
cin>>arr[i];
}
}


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

tc(t)
{
     cin>>n>>d;
     vector<pair<ll,ll>>v(n);
    rep(i,n,1)cin>>v[i].first;
    rep(i,n,1)cin>>v[i].second;

    sort(all(v));
    vl swewtness(n,0);

    ll mxsweet=0;
    for (ll i = 0; i < n; i++)
    {
       

       mxsweet=max(mxsweet, v[i].second);

       swewtness[i]=mxsweet;
    }
    ll ans=0;
    
    for (ll i = 0; i < n; i++)
    
    {  
       if(v[i].first>d){
          break;
       }
       ll sw=v[i].second;
       ll j=upper_bound(all(v),mp(d-v[i].first,ll(INT64_MAX)))-v.begin();
      
    
   
      
         j=min(i,j);
         j--;
         if(j>=0)
          sw+=swewtness[j];
      
      
       ans=max(ans, sw);
     
    }
    cout<<ans<<endl;
    
}
return 0;
}