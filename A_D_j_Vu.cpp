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

// tc(t)
// {
//      cin>>s;
//      c=0;
//      vl v;
//      n=s.length();
//      r=s;
//      reverse(all(r));
//      for (ll i = 0; i < n; i++)
//      {
//          if(s[i]=='a'){
//             v.pb(i);
//          }
//      }
//      r='a'+s;
//      reverse(all(r));
//      if(r!='a'+s){
//          cout<<"YES"<<endl;
//          cout<<"a"+s<<endl;
//      }
//      else {
//           r=s+'a';
//           reverse (all(r));
//           if(r!=s+'a'){
//               cout<<"YES"<<endl;
//               cout<<s+'a'<<endl;
//           }else{
//               cout<<"NO"<<endl;
//           }
//      }
     
         
         
     
     
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

tc(t)
{
     cin>>s;
     c=0;
     n=s.length();
     for (ll i = 0; i < n; i++)
     {
         if(s[i]=='a'){
             c++;
         }
     }
     if(c==n)cout<<"NO"<<endl;
     else{
     bool flg=0;
         string str;
      for (ll i = 0; i < n; i++)
     {  
          str.clear();
         for (ll j = 0; j < n; j++)
         {
             if(j==i)str.pb('a');
             str.pb(s[j]);
         }
         r=str;
         reverse(all(r));
         if(r!=str){
             flg=1;
             break;
         } 
           str.clear();
         for (ll j = 0; j < n; j++)
         {
             if(j==n-1-i)str.pb('a');
             str.pb(s[j]);
         }
         r=str;
         reverse(all(r));
         if(r!=str){
             flg=1;
             break;
         }
         
     }
     if(flg){
         cout<<"YES"<<endl;
         cout<<str<<endl;
     }
     else cout<<"NO"<<endl;
     
}
}
return 0;
}