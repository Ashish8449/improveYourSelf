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
#define vvi               vector<vi>
#define vvl               vector<vl>
#define vvs               vector<vs>
#define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb               push_back
#define mp               make_pair
#define fi                first
#define se                second
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

// template<typename T>
// void dbg_list(const T &arr, char c = ' ')
// {  cerr<<"[";
// for (auto x : arr)
// {
// dbg(x)
// }
// cerr"[" << endl;
// }

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
     cin>>n>>s;
     ll alice=0, bob=0;
         bool flg=0;
   
         if(s[n/2]=='0'&&n%2){
             alice++;
             s[n/2]='1';
             flg=1;


         }
     
         ll c1=0;
         for (ll i = 0; i < n; i++)
         {
            if(s[i]=='0'){
                c1++;
            }

         }

         if(flg){
             if(c1==1){
                 cout<<"DRAW\n";
             }
             else if(c1==0){
                 cout<<"BOB"<<endl;
             }else {
                 cout<<"ALICE\n";
             }
         }else{
             if(c1==0){
                  cout<<"DRAW\n";
             }
             else {
                 cout<<"BOB"<<endl;
             }
         }
         
     
}
return 0;
}