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
     cin>>n>>m;
    vector<vl>v(n,vl (m)), ans(n, vl(m, -1));
    map<ll,ll>map;
    for (ll i = 0; i < n; i++)
    {
        map[a]=0;
    }
    for (ll i = 0; i < n; i++)
    {
        input_array(v[i]);
        sort(all(v[i]));
    }
    for (ll i = 0; i < m; i++)
    {
        ll mn=INT64_MAX, index=-1;
        for (ll j = 0; j < n; j++)
        {
            if(mn>v[j][map[j]]){
                mn=v[j][map[j]];
                index=j;
            }
        }
        ans[index][i]=v[index][map[index]];
        v[index][map[index]]=-1;
        map[index]++;
        
    }
    // for (ll i = 0; i < n; i++)
    // {
    //     print_array(v[i]);
    // }
    // for (ll i = 0; i < n; i++)
    // {
    //     print_array(ans[i]);
    // }
    
   for (ll i = 0; i < n; i++)
   {   
        ll z=0;
       for (ll j = 0; j < m; j++)
       {
          while (ans[i][z]!=-1&&z<m)
          {
              z++;
          }
          if(v[i][j]!=-1){
              ans[i][z]=v[i][j];
          }
           
       }
       
   }
   for (ll i = 0; i < n; i++)
   {
      print_array(ans[i]);
   }
   
   
    
   
    
    
    
    
     
     

     
     
     
}
return 0;
}