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
{   clock_t s=clock();
    cin>>n;
    ll ans=0;
    vl perfect;
    for (ll i =1; i <= n; i++)
    {
       
        perfect.pb(i*i);
    }
    
    // cout<<perfect.size();
    for (ll i = 0; i < perfect.size(); i++)
    {
        for (ll j = i+1; j < perfect.size(); j++)
        {
            a=perfect[i]+perfect[j];
            if(a>n*n)break;
          ll k=lower_bound(all(perfect),a)-perfect.begin();
        
          if(a==perfect[k]){
              ans++;
            //   cout<<i<<" "<<" "<<j<<" "<<k<<endl;
          }
        }
        
    }
    cout<<ans<<endl;
    cout<<ld(clock()-s)/CLOCKS_PER_SEC<<endl;
    
    
    
    // cout<<ans<<endl;
    
     
}
return 0;
}