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
 
     ll b, g,r;
     cin>>b>>g>>r;
     ll ans=(b/3)+(g/3)+(r/3)+min(b%3,min(g%3,r%3));
     if(b%3==g%3&&b%3==2&&r%3==0&&r>=3)ans++;
     if(r%3==g%3&&g%3==2&&b%3==0&&b>=3)ans++;
     if(b%3==r%3&&b%3==2&&g%3==0&&g>=3)ans++;
    // ll a=min(r,min(g,b));
    // ll ans=a;
    // ans+=(b-a)/3;
    // ans+=(g-a)/3;
    // ans+=(r-a)/3;
     cout<<ans<<endl;

    
return 0;
}