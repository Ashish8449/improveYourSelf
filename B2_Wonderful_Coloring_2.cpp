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
ll a, b,c,d,e,f,m,n,p,q,k;
string s,r;

tc(t)
{
     cin>>n>>k;
     map<ll,ll>check,prnt;
     vector<pair<ll,ll>>v(n);
     for (ll i = 0; i < n; i++)
     {
         cin>>v[i].first;
         v[i].second=i;
        check[v[i].first]++;
        prnt[v[i].first]=1;

     }
     ll count=0;
     for(auto x:check){
         if(x.second<k)count+=x.second;
     }
     count=(count/k)*k;
     vl ans(n,0);
     sort(all(v));
     ll j=1;
     for (ll i = 0; i < n; i++)
     {
         if(check[v[i].first]>=k){
             if(prnt[v[i].first]<=k){
             ans[v[i].second]=prnt[v[i].first];
             prnt[v[i].first]++;
             }
             else{
                 ans[v[i].second]=0;
             }
         }
         else{
             if(j<=count){
                 if(j%k){
                     ans[v[i].second]=j%k;
                 }
                 else{
                     ans[v[i].second]=k;
                 }
                 j++;
             }
             else{
                 ans[v[i].second]=0;
             }
         }

         
     }
     print_array(ans);
     
     

}
return 0;
}