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
ll gcd(ll a,ll b)       {if(b==0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b)       {return (a*b)/gcd(a,b);}


template<typename T>
void print_array(const T &arr, char c = ' ')
{
for (auto x : arr)
{
cout << x << c;
}
cout << endl;
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
    ll n ;
    cin>>n;
    vl even, odd;
    for (ll i = 0; i < n; i++)
    {
        ll a;cin>>a;
        if(a%2)odd.pb(a);
        else even.pb(a);

    }
    ll s=even.size();
    ll ans=n*s-s-(s*(s-1))/2;
    // ll ans=0;
    // for (ll i = 0; i < even.size(); i++)
    // {
    //     ans+=(n-1-i)
    // }
    
    // cout<<ans<<endl;
    for (ll i = 0; i < odd.size(); i++)
    {
        for (ll j = i+1; j < odd.size(); j++)
        {
            if(gcd(odd[i],2*odd[j])>1){
                ans++;
            }
        }
        
    }
    cout<<ans<<endl;
    
    
}

     
return 0;
}