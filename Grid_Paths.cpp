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

//tc(t)
{
     cin>>n;
     vs v(n);
     for (ll i = 0; i < n; i++)
     {
         cin>>v[i];
     }
     vector<vi>dp(n, vi(n,0));
     for (ll i = 0; i < n; i++)
     {
         if(v[0][i]=='*')break;
         dp[0][i]=1;
     }
      for (ll i = 0; i < n; i++)
     {
         if(v[i][0]=='*')break;
         dp[i][0]=1;
     }
     for (ll i = 1; i < n; i++)
     {
        //  print_array(dp[i]);
         for (ll j = 1; j < n; j++)
         {   
              if(v[i][j]=='*')continue;
             if(v[i-1][j]!='*'){
                 dp[i][j]+=dp[i-1][j];
             }
             if( v[i][j-1]!='*'){
                 dp[i][j]+=dp[i][j-1];
             }
             dp[i][j]%=mod;
         }
         
     }
     cout<<dp[n-1][n-1]<<endl;
     
}
return 0;
}