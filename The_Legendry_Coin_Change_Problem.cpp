// /*
// *
// *************************************************************
// * AUTHOR : Ashish Gururani                                  *
// * Language: C++14                                           *
// * Purpose: -                                                *
// * IDE used: Visual Studio Code.                             *
// *************************************************************
// *
// Comments will be included in practice problems if it helps ^^
// */
// #include <bits/stdc++.h>
// typedef long             long ll;
// typedef long             double ld;
// #define rep(i,n,k)       for(ll i=0;i<n;i+=k)
// #define rrep(i,n,k)      for(ll i=n;i>=0;i-=k)
// #define rep1(i,n,k)      for(ll i=1;i<n;i+=k)
// #define vi               vector<int>
// #define vl               vector<ll>
// #define vs               vector<string>
// #define vvi              vector<vi>
// #define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define pb               push_back
// #define mp               make_pair
// #define fi                first
// #define se                second
// #define tc(t)            long long t;cin>>t;while(t--)
// #define all(x)           (x).begin(), (x).end()
// #define dbg(x)           cout<<#x<<" = "<<x<<endl
// #define inf                 1e6+5
// #define mod              ll(1e9+7)
// using namespace std;
//      //  vector<vl>dp(105, vector <ll>(ll(1e6+3),-1));
//      ll dp[105][ll(1e6+4)];
// ll solve(vl v, ll n, ll sum){


//      if(sum==0){
//           dp[n][sum]=1;
//           return dp[n][sum];
//      }
//      if(n==0){
//           dp[n][sum]=0;
//           return dp[n][sum];
//      }
//      if(dp[n][sum]!=-1)return dp[n][sum];
//      if(sum>=v[n-1]){
//           dp[n][sum]=solve(v,n,sum-v[n-1])+solve(v,n-1,sum);
//           return dp[n][sum]%mod;
//      }
//      else{
//           dp[n][sum]=solve(v,n-1,sum);
//            return dp[n][sum]%mod;
//      }
//      return dp[n][sum]%mod;

// }



// int main()
// {
//      #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif

// fast;
// ll a,n;
// string s,r;

// //tc(t)
// {
//       cin>>n>>a;
//       vl v(n);
//       memset(dp, -1, sizeof(dp));
     
//      for (ll i = 0; i < n; i++)
//      {
//           cin>>v[i];
//      }
     
//      cout<<solve(v, n,a)<<endl;
// //    for (ll i = 0; i < n; i++)
// //    {
        
// //         for (ll i = 0; i < a+1; i++)
// //         {
// //              cout<<dp[i][a]<<" ";
// //         }
// //         cout<<endl;
        
// //    }
   
     
      
      
      
      

// }
// return 0;
// }

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
      cin>>a>>n;
      vl v(n);
       input_array(v);
     
      vector<vl>dp(n+1, vector <ll>(a+1,0));
    //   for (ll i = 0; i < n+1; i++)
    //   {
    //        vl z(a+1,0);
    //        dp.pb(z);
    //   }
     
      dp[0][0]=1;
      for (ll i = 1; i < n+1; i++)
      {
     
           for (ll j = 0; j < a+1; j++)
           {   
               //  if(j==0)dp[i][j]=1;
               // else if(j>=v[i-1])dp[i][j]=dp[i-1][j]+dp[i][j-v[i-1]];
               // else{
               //      dp[i][j]=dp[i-1][j];
               // }
               // dp[i][j]%=mod;
               dp[i][j]=dp[i-1][j];
               ll lef=j-v[i-1];
               if(lef>=0)dp[i][j]+=dp[i][j-v[i-1]];
               dp[i][j]%=mod;
            //    cout<<dp[i][j]<<" ";
          
 
           }
        //  cout<<endl;
           
      }
    
      cout<<dp[n][a]<<endl;
      
      
 
}
return 0;
}