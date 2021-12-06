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

tc(t)
{
     ll k;
     cin>>n>>k;
     cin>>s;
     ll ans=0;
     ll lp=0;
     ll co=0;
     for (ll i = 0; i < n; i++)
     {
         if(s[i]=='1'){
           co++;
         }
     }
    //  if(k!=0)
     for (ll i = 0; i < s.length(); i++)
     {
       if(s[i]=='1'){
           if(lp==0){
               ans++;
            //    if(i+1<n&&s[i+1]=='0')
               lp=i+1;
           }
           else if(i-lp==k){
               lp=i;
           }else if(i-lp==k+1){
                // if(i+1<n&&s[i+1]=='0')
               lp=i-1;
           }
           else if(i-lp<k){
            // if(i+1<n&&s[i+1]=='0')
               lp=i+1;
           }else {
               ans++;
               lp=i+1;
           }
       }
     }
    //  if(co==0)cout<<co<<endl;
    //  else
     cout<<ans<<endl;
     
}
return 0;
}