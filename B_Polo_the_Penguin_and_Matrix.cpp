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
ll solve(vl &v,ll com,ll&d,ll n){
    ll ans=0;
    vl vec(n);
    for (ll i = 0; i < n; i++)
    {
        vec[i]=abs(v[i]-com);
    }
    // sort(all(vec));
    // print_array(vec);
    ll count=0;
    for (ll i = 0; i < n; i++)
    {
        if(vec[i]%d)count++;
        ans+=(vec[i]/d);
    }
    // dbg(count);
    if(count)return -1;
    else{
        return ans;
    }
    

}
ll n;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll a, b,c,d,e,f,m,p,q;
string s,r;

// tc(t)
{
     cin>>n>>m>>d;
     vl v(n*m);

     for (ll i = 0; i < n*m; i++)
     {
         cin>>v[i];
     }
     sort(all(v));
     if((n*m)%2){
         cout<<solve(v,v[(n*m)/2],d,(n*m))<<endl;

     }else{
         cout<<min(solve(v, v[(n*m)/2],d,n*m),solve(v,v[(n*m+1)/2],d,n*m))<<endl;
     }
     
}
return 0;
}