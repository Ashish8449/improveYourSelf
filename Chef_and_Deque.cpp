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
#define vl               vector<int>
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
ll n,m,ans=INT64_MAX;
vvl adj;
vl vis;
void solve(vl v, vi check,ll op){

    if(v.empty()){
        return;
    }
    ll sum=0;
    for (ll i = 0; i < v.size(); i++)
    {
        sum+=v[i];
    }
   
    if(sum%m==0){
        
        ans=min(ans, op);
        return;
    }
   
    
    for (ll i = 0; i < check.size(); i++)
    {
        ll k=(1LL<<i);
        
        if(!check[i]){
            vl vec;
            check[i]=1;
            
            for (ll i = 0; i < v.size()-k; i++)
            {
               vec.pb(v[i]);
            }

           
            solve(vec,check,op+1);
            vl v2;
            for (ll i = k; i < v.size()-k; i++)
            {
                v2.pb(v[i]);
            }
            solve(v2,check,op+1);

        }
    }
    return ;
    
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
// ll a, b,c,d,e,f,m,n,p,q;
string s,r;

tc(t)
{
     cin>>n>>m;
     vl v(n);
     input_array(v);
     vi check(32, 0);
     ans = INT64_MAX;
     solve(v, check, 0);
    //  print_array(v);
    //  cout << "YE";
     if (ans == INT64_MAX)
         cout << -1 << endl;
     else
         cout << ans << endl;
}
return 0;
}