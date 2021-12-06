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
     vl v(n),temp(n);
     for (ll i = 0; i < n; i++)
     {
          cin>>v[i];
          temp[i]=v[i];
     }
     sort(all(v));
     vl check(n);
     ll start=-1,end=-1;
     for (ll i = 0; i < n; i++)
     {
          if(v[i]!=temp[i]&&start==-1)start=i;
          if(v[i]!=temp[i]&&start!=-1)end=i;

           if(start==-1)check[i]=v[i];

     }
     // dbg(start);
     // dbg(end);

     ll j=start;
     for (int i = end ; i >= start; i--)
     {
          check[j]=temp[i];
          j++;
     }
     for (ll i = end+1; i < n; i++)
     {
          check[i]=temp[i];
     }
     // print_array(check);
     bool flg=1;
     for (ll i = 0; i < n; i++)
     {
          if(check[i]!=v[i])flg=0;
     }
     
dbg(start);
     if(start==-1&&end==-1){
          cout<<"yes"<<endl;
          cout<<1<<' '<<1<<endl;
     }
     else if(flg){
          cout<<"yes"<<endl;
          cout<<start+1<<' '<<end+1<<endl;
     }
     else {
          cout<<"no"<<endl;
     }
     
     
     
     
   
     
     

     
     
     
     
}
return 0;
}