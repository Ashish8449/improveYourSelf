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

//tc(t)
{
//  cin>>s>>r;
getline(cin,s);
getline(cin,r);
cout<<r<<endl;
  map<char,ll>ms,mr;
  for (ll i = 0; i < s.length(); i++)
  {
      if(s[i]!=' '){
          ms[s[i]]++;
      }
  }
  for (ll i = 0; i < r.length(); i++)
  {
      if(r[i]=='1'){
          mr[r[i]]++;
      }
  }
  bool flg=1;
  for (ll i = 0; i < 26; i++)
  {
      char ch='a'+i;
      if(mr[ch]>ms[ch])flg=0;
      ch='A'+i;
      if(mr[ch]>ms[ch])flg=0;
      
  }
  if(flg)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
  
      
}
return 0;
}