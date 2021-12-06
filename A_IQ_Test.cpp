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
// #define dbg(x)           cout<<x<<" = "<<x<<endl
// #define inf                 1e6+5
// #define mod              ll(1e9+7)
// using namespace std;

// template<typename T>
// void print_array(const T &arr, char c = ' ')
// {
// for (auto x : arr)
// {
// cout << x << c;
// }
// cout << endl;
// }

// template<typename T>
// void input_array(vector< T> &arr)
// {
// for (ll i = 0; i < arr.size(); i++)
// {
// cin>>arr[i];
// }
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif
// fast;
// ll a, b,c,d,e,f,m,n,p,q;
// string s,r;

// //tc(t)
// {
//      vector<string>v(4);
//      for (ll i = 0; i < 4; i++)
//      {
//          cin>>v[i];
//      }
//     //  for (ll i = 0; i < 4; i++)
//     //  {
//     //      cout<<v[i]<<endl;
//     //  }
//      bool flg=0;
//      for (ll i = 0; i < 3; i++)
//      {
//          for (ll j = 0; j < 3; j++)
//          {
//              ll c=0;
//              if(v[i][j]=='#')c++;
//              if(v[i+1][j]=='#')c++;
//              if(v[i][j+1]=='#')c++;
//              if(v[i+1][j+1]=='#')c++;
//              if(c==0||c==1||c==3||c==4)flg=1;
//          }
         
//      }
//      if(flg){
//          cout<<"YES"<<endl;

//      }else cout<<"NO"<<endl;
     
     

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
     cin>>n;
     vl v(n);
     rep(i,n,1)cin>>v[i];
     ll even=0, odd=0,ei=0,odi=0;
     for (ll i = 0; i < n; i++)
     {
         if(v[i]&1){
             ei=i+1;
             even++;
         }
         else {
              odd++;
              odi=i+1;
         }
     }
     if(even<odd){
         cout<<ei<<endl;
     }else{
         cout<<odi<<endl;
     }
     

}
return 0;
}