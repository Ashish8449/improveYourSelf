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
vl v;
set<ll>st;
for (ll i = 2; i <= 1e6; i++)
{
    ll x=i;
    while (ll(1e18/ld(i))>=x)
    {
        x*=i;
       st.insert(x);
         
    }
    
}

tc(t)
{
  cin>>n;
  ll star=0,end=v.size();

auto it= st.upper_bound(n);
// cout<<*it<<endl;

if(it!=st.end())b=*it;
else b=-1;


if(it!=st.begin())
it--,a=*it;
else 
a=-1;




dbg(a);
dbg(b);

  ll ans;
  ll dif=INT64_MAX;
 if(abs(n-a)<=d&&a!=-1){
      d=abs(n-a);
      ans= a;
      

  }else if(abs(n-b)<=d&&b!=-1){
      d=abs(n-b);
      ans=b;
  }
//   dbg(abs(n-a));
  dbg(abs(n-b));
  cout<<ans<<endl;
  
// dbg(a);
// dbg(b);
  

}
return 0;
}