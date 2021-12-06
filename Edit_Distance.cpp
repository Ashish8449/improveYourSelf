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

     vector<vl>dp(5001+1, vl(5000+1, -1));
     ll lcs(string s, string r, ll ls, ll lr){

         if(lr==0||ls==0){
             dp[ls][lr]=0;
             
             return dp[lr][ls];
         }
          if(dp[ls][lr]!=-1)return dp[ls][lr];
         if(s[ls-1]==r[lr-1]){
             return dp[ls][lr]=1+lcs(s, r, ls-1,lr-1);
         }
         else {
              dp[ls][lr]=max(lcs(s,r,ls-1,lr),lcs(s,r,ls,lr-1));
              return dp[ls][lr];
         }
         return dp[ls][lr];
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
     cin>>s>>r;
     cout<<lcs(s, r, s.length(),r.length())<<endl;
     for (ll i = 0; i < s.length(); i++)
     {
         print_array(dp[i]);
     }
     cout<<s.length()<<r.length()<<endl;
     cout<<max(s.length(), r.length())+abs(ll( r.length()-s.length())) -lcs(s,r,s.length(),r.length())<<endl;

}
return 0;
}