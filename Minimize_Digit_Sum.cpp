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

template<typename T>
void input_array(vector< T> &arr)
{
for (ll i = 0; i < arr.size(); i++)
{
cin>>arr[i];
}
}

vl ans;
ll func(ll n, ll b){
   
    ll sum=0;
    if(n>=b){

    
    while (n!=1)
    {   ll a=b;
    if(n<b){
        return sum +n;
    }
        while (n/a)
        {
           a*=b;
        }
        sum+=(n/(a/b));
        n/=(a/b);
        dbg(n);
    }
    return sum;
    // ans.pb(sum);
    }
    else {
        return n;
    }
    
}
vvl adj;
vl vis;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll a, b,c,d,e,f,m,n,p,q;
// string s,r;

tc(t)
{
    ll l, r;
     cin>>n>>l>>r;
     ll ans =INT64_MAX;
    //  dbg(l);
     for (ll i = l; i <=r; i++)             
     {
    //    dbg(i);
        // cout<<func(n, i)<<endl;
        ans =min (ans, func(n, i));
     }
     dbg(ans);

}
return 0;
}