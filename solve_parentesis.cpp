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
vs v;
void solve(ll n,ll o,ll z,string s){
    if(n==0){
        v. pb(s);
        return;
    }
    if(o-z>1){
      solve(n-1,o+1,z,s+'1');
      solve(n-1,o,z+1,s+'0');
      
    }else {
      solve(n-1,o+1,z,s+'1');
        
    }
}
// void solve(ll n,ll o,ll c,string out,ll total){
//     if(n==0){v.pb(out);return ;}
//     // cout<<n<<endl;
//     if(o==c){
//         solve(n-1, o+1,c,out+'(',total);
//     }
//     if(o<total/2&&o!=c){
//         solve(n-1,o+1,c,out+'(',total);
//     }
//     if(o>c)solve(n-1,o,c+1,out+')',total);
// }
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll n;
cin>>n;
string s;
solve(n,0,0,s);
// cout<<"UEs"<<endl;
for (ll i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}

     
return 0;
}