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
ll gcd(ll a,ll b)       {if(b==0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b)       {return (a*b)/gcd(a,b);}


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
     cin>>n;
     vl v(n), dif;
 
     for (ll i = 0; i < n; i++)
     {
         cin>>v[i];
         if(i>0){
             dif.pb(abs(v[i]-v[i-1]));
         }
     }
    //  print_array(v);
    //  print_array(dif);
     ll ans=1,gd=0;
     for (ll i = 0; i < dif.size(); i++)
     {
          c=0;
       
         bool flg=0;
         gd=0;
          a=i;
         while (gcd(gd,dif[i])>=2&&i<dif.size())
         {
            gd=gcd(gd,dif[i]);
            i++;
            c++;
            // dbg(gd);
            // dbg(i);
            flg=1;
         }
    //    if(flg)i--;
         
         ans=max(ans, c+1);
         i=a;
         
     }
     cout<<ans<<endl;
     
     
}
return 0;
}