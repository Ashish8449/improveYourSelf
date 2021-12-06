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
vl a,b;
  ll n;
bool good(ll x){
    // dbg(x);
    ll adda=0, addb=0;
    ll z= n+x;
    z-=z/4;
    adda=x*100;
    for (ll i = 0; i < max(ll(0), z-x); i++)
    {
        adda+=a[i];
    }
    for (ll i = 0; i < min(z, n); i++)
    {
        addb+=b[i];
    }
    
    // dbg(adda);
    // dbg(addb);
    if(adda>=addb) return 1;
    else return 0;
    
    
    
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
tc(t){
  
    cin>>n;
    a.resize(n);
    b.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(all(a), greater<>());
    sort(all(b), greater<>());
    // print_array(a);
    // print_array(b);
    if(good(0)){
        cout<<0<<endl;
        // cout<<"YEs";
        continue;
    }
    ll start=0, end=2*n+1;
    while (start+1!=end)
    {
        ll mid= start+end;
        mid/=2;
        bool flg= good(mid);
        if(flg)end=mid;
        else start=mid;
    //   dbg(start);
    //   dbg(end);
        
    }
      
      cout<<end<<endl;

   
    
    

}
     
return 0;
}