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
#define ff                first
#define se                second
#define maxn              1e6+3
#define inf               1e18
#define mod               1e9+7
#define pi               3.1415926535897932384626433832795
#define tc(t)            long long t;cin>>t;while(t--)
#define mem(dp,i)        memset(dp,i,sizeof(dp))
#define all(x)           (x).begin(), (x).end()
#define dbg(x)           cout<<x<<" = "<<x<<endl
using namespace std;
 
ll gcd(ll a,ll b)       {if(b==0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b)       {return (a*b)/gcd(a,b);}
 
ll power(ll n, ll p)
{
 ll res=1;
 while (p)
{
  if(p%2)
  res*=n,  p--;
else
    n*=n ,p/=2;
}
   return res;
}
void print_vector(vl v)    {for(auto i: v)  cout<<i<<" "<<endl;}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll n,k;
cin>>n>>k;
vl v(n);
rep(i,n,1)cin>>v[i];
bool flg=1,lj=0;;
for (ll i = 0; i < n; i++)
{
    for (ll j = i+1; j < n; j++)
    {
        ll z=lower_bound(all(v), k-v[i]-v[j])-v.begin();
        if(z!=i&&z!=j&&z<n&&v[z]==k-v[i]-v[j]){
         cout<<min(i,min(z,j))+1<<" "<<i+j+z+1-min(i,min(j,z))-max(i,max(j,z)) <<" "<<max(i,max(j, z))+1<<endl;
         lj=1;
         break;
        }
        z++;
       if(z!=i&&z!=j&&z<n&&v[z]==k-v[i]-v[j]){
         
         cout<<min(i,min(z,j))+1<<" "<<i+j+z+1-min(i,min(j,z))-max(i,max(j,z)) <<" "<<max(i,max(j, z))+1<<endl;
        lj=1;
         break;
        }
        z++;
        if(z!=i&&z!=j&&z<n&&v[z]==k-v[i]-v[j]){
         
         cout<<min(i,min(z,j))+1<<" "<<i+j+z+1-min(i,min(j,z))-max(i,max(j,z)) <<" "<<max(i,max(j, z))+1<<endl;
        lj=1;
         break;
        }
       
       
    }
    if(lj){
        flg=0;
        break;}
    
}
if(flg)cout<<"IMPOSSIBLE\n";
 
     
return 0;
}