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
#define dbg(x)           cout<<#x<<" = "<<x<<endl
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
bool mysort(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first)return p1.second<p2.second;
    return p1.first>p2.first;
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
{   ll x;
     cin>>n>>m>>x;
     vector<pair<ll,ll>>v(n);
     for (ll i = 0; i < n; i++)
     {
         cin>>v[i].first;
         v[i].second=i+1;
     }
     
     sort(all(v), mysort);
  vl ans;
  for (ll i = 0; i < n; i++)
  {
      if(v[i].first>=m){
          ans.pb(v[i].second);
          x--;
      }
      else if(x>0){
          ans.pb(v[i].second);
          x--;

      }
  }
  cout<<ans.size()<<" ";
  sort(all(ans));
  print_array(ans);
  
     

}
return 0;
}