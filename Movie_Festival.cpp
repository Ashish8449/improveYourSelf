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
bool mycmp(pair<ll,ll>p1, pair<ll,ll>p2){
    return p1.second<p2.second;
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
     vector<pair<ll,ll>>v(n);
     for (ll i = 0; i < n; i++)
     {
         cin>>v[i].first;
         cin>>v[i].second;
        //  v[i].second=v[i].first-v[i].second;
        
     }
 
     sort(all(v), mycmp);
    //  for (ll i = 0; i < n; i++)
    //  {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    //  }
     
    //  dbg_vector(v);
    ll ans=0, tem=v[0].first;
    for (ll i = 0; i < n; i++)
    {
        if(tem<=v[i].first){
            ans++;
            tem=v[i].second;
        }
    }
    cout<<ans<<endl;
    
     
}
return 0;
}