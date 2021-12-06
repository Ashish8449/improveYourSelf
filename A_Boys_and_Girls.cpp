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



int main()
{
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// // #endif
fast;
  ll b,g;
  cin>>b>>g;
  string s;
  if(b>g){
   s="BG";
  }else{
      s="GB";
  }
  for (ll i = 0; i < min(b,g); i++)
  {
      cout<<s;
  }
  ll i=min(b,g);
//   dbg(i);
  while (i<b)
  {
      cout<<"B";
      i++;
  }
  while (i<g)
  {
      cout<<"G";
      i++;
  }
  
  
  
  
   
return 0;
}