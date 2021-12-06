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
     vector<pair<ll,ll>>v;
     for (ll i = 0; i < 2*n; i++)
     {
        cin>>a;
        v.pb(mp(a, i+1));
     }
     sort(all(v));
    //  vl ans(2*n);
    //  for (ll i = 0; i < 2*n; i++)
    //  {
    //      cout<<v[i].first<<" "<<v[i].second<<endl;
    //  }
     
     bool flg=1;
     for (ll i = 0; i < 2*n; i++)
     {
         if(v[i].first==v[i+1].first){
            //  ans[i]=(v[i].second);
            //  cout<<ans[i]<<" ";
             i++;
            //  ans[i]=(v[i].second);
            //  cout<<ans[i]<<endl;
         }else{
             flg=0;break;
         }
     }
     if(flg){
         for (ll i = 0; i < 2*n; i++)
     {
         if(v[i].first==v[i+1].first){
            
             cout<<v[i].second<<" ";
             i++;
            
             cout<<v[i].second<<endl;
         }else{
             flg=0;break;
         }
     }
         
     }else cout<<-1<<endl;
     
     
}
return 0;
}