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
//      cin>>s>>r;
//      vl v;
//      bool flg=0;
//      if(r.length()>s.length()){
//          flg=0;
//      }else 
//      {
//      ll i, j=r.length()-1;
//         for ( i = s.length() - 1; i >= 0; i-=2)
//         {
//             if(s[i]==r[j]&&j>=0){
//                 j--;
//                 i--;
//                 while (s[i]==r[j])
//                 {
//                     i--;
//                     j--;
//                 }
//                 i++;
                

//             }
//         }
//         if(j<0){
//             flg=1;
//         }
        

//      }
//      if(flg)cout<<"YES"<<endl;
//      else cout<<"NO"<<endl;
     
     
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
#define vvl              vector<vl>
#define vvs              vector<vs>
#define mem(a,b)         memset(a,b,sizeof(a))
#define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb               emplace_back
#define mp               make_pair
#define fi               first
#define se               second
#define nline          "\n"
#define tc(t)            long long t;cin>>t;while(t--)
#define all(x)           (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define dbg(x)           cerr<<#x<<" = "<<x<<endl
#else
#define dbg(x)
#endif
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

template<typename T>
void dbg_vector(const T &arr, char c = ' ')
{  cerr<<"[";
for (auto x : arr)
{
cerr<<x<<' ' ;
}
cerr<<"[" << endl;
}

vvl adj;
vl vis;
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
     cin>>s>>r;
     bool flg=0;
     ll j=0;
     if(s.length()>=r.length()){

     ll i=s.length()-1;
     j=r.length()-1;

     for (int i = s.length() - 1; i >= 0; i--)
     
     
     {
         if(s[i]==r[j]){
            
            j--;
            flg =1;
            if(j==-1){
                break;
            }
            dbg(s[j]);
         }
         else {
             i--;

         }
     }
     if(j<0){
         cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;
     }
     else cout<<"NO"<<endl;
     
}
return 0;
}