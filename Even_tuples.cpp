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
ll printNcR(ll n, ll r)
{
 
  
    long long p = 1, k = 1;
 
   
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            long long m = __gcd(p, k);
 
            
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
       
    }
 
    else
        p = 1;
 
    
   return p;
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
     cin>>n>>q;
     vl v(n),even(n+1,0),odd(n+1,0);
     for (ll i = 0; i < n; i++)
     {
         cin>>v[i];
         if((v[i]&1)==0)even[i+1]++;
         else odd[i+1]++;
         even[i+1]+=even[i];
         odd[i+1]+=odd[i];
     }
    //  print_array(even);
    //  print_array(odd);
    for (ll i = 0; i < q; i++)
    {
    ll L,R;
    cin>>L>>R;
    ll ce=even[R]-even[L-1];
    ll co=odd[R]-odd[L-1];
    // dbg(ce);
    // dbg(co);
    ll ans=0;
    if(ce>=3)ans+=printNcR(ce,3);
    if(co>=2){
        ll val =printNcR(co,2);
        ans+=(ce*val);
    }
    cout<<ans<<endl;
    }
    
     
}
return 0;
}