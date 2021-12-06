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
vl ans;
void solve(vl v, ll n, ll product,ll c){
    if(c==5){
        if(product!=INT64_MIN)
        ans.pb(product);
        return;
    }
    if(n==0)return;
    solve(v, n-1, v[n-1]*product,c+1);
    solve(v, n-1,product ,c);
    return;

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
     cin>>n;
     vl v(n);
     input_array(v);
     sort(all(v));
     map<pair<ll,ll>,ll>map;
     
     for (ll i = 0; i < 4; i++)
     {
         map[mp(v[i],i)]++;
     }
     for (int i = n - 1; i >= n-5; i--)
     {
         map[mp(v[i],i)]++;
     }
     vl an;
     for (auto x: map   )
     {
         a =x.first.first;
         an.pb(a);
     }
     
     
     

     solve(an, an.size(), 1,0);
     sort(all(ans));
     cout<<ans.back()<<endl;
     ans.clear();
}
return 0;
}