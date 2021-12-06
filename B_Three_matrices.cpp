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
 ll n;
 cin>>n;
 vector<vector<ld>>w(n+1,vector<ld>(n+1)),a(n+1,vector<ld>(n+1)),b(n+1,vector<ld>(n+1));
 for (ll i = 1; i < n+1; i++)
 {
     for (ll j = 1; j < n+1; j++)
     {
         cin>>w[i][j];
     }
     
 }
 for (ll i = 1; i < n+1; i++)
 {
     for (ll j = 1; j < n+1; j++)
     {
         a[i][j]=(w[i][j]+w[j][i])/ld(2);
         
             a[j][i]=a[i][j];
         if(i==j){
             break;
         }
     }
     
 }
 for (ll i = 1; i < n+1; i++)
 {
     for (ll j = 1; j < n+1; j++)
     {
         b[i][j]=(w[i][j]-w[j][i])/ld(2);
         if(i!=j){
             b[j][i]=-b[i][j];
         }
         if(i==j){
             b[j][i]=b[i][j];
             break;
         }
     }
     
 }
  for (ll i = 1; i < n+1; i++)
 {
     for (ll j = 1; j < n+1; j++)
     {
         cout<<a[i][j]<<" ";
     }
     cout<<endl;
     
 }  for (ll i = 1; i < n+1; i++)
 {
     for (ll j = 1; j < n+1; j++)
     {
         cout<<b[i][j]<<" ";
     }
     cout<<endl;
     
 }

 
 
return 0;
}