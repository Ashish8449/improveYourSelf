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
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
tc(t){
    ll w,h;
    cin>>h>>w;
    vs s;
    for (ll i = 0; i < h; i++)
    {
        string p(w,'0');
        s.pb(p);
    }
    for (ll j = 0; j < w; j++)
    {
        if(j%2==0)s[0][j]='1';
    }
    for (ll i = 0; i < h; i++)
    {
        if(i%2==0)s[i][0]='1';
    }
    for (ll j = 1; j < w; j++)
    {
        if(s[h-1][j-1]!='1'&&s[h-2][j-1]!='1')
        s[h-1][j]='1';
    }
    for (ll i = 1; i < h-1; i++)
    {
        if(s[i-1][w-1]!='1'&&s[i-1][w-2]!='1'&&s[i+1][w-2]!='1'&&s[i+1][w-1]!='1')s[i][w-1]='1';
    }
// .
  vs r;
    for (ll i = 0; i < h; i++)
    {
        string p(w,'0');
        r.pb(p);
    }
        for (ll j = 0; j < w; j++)
    {
        if(j%2)r[0][j]='1';
    }
    for (ll i = 1; i < h; i++)
    {
        if(i%2==0)r[i][0]='1';
    }


     for (ll j = 1; j < w; j++)
    {
        if(r[h-1][j-1]!='1'&&r[h-2][j-1]!='1')
        r[h-1][j]='1';
    }
    for (ll i = 1; i < h-1; i++)
    {
        if(r[i-1][w-1]!='1'&&r[i-1][w-2]!='1'&&r[i+1][w-2]!='1'&&r[i+1][w-1]!='1')r[i][w-1]='1';
    }
  ll cs=0,cr=0;
    for (ll i = 0; i < h; i++)
    {
       for (ll j = 0; j < w; j++)
       {
           if(s[i][j]=='1')cs++;
           if(r[i][j]=='1')cr++;
       }
       
    }
    // cout<<cs<<" "<<cr<<endl;
    if(cs>=cr){
        for (ll i = 0; i < h; i++)
        {
            /* code */
            cout<<s[i]<<endl;
        }
        // cout<<endl;
        // cout<<endl;

        
    }else{
        for (ll i = 0; i < h; i++)
        {
            /* code */
            cout<<r[i]<<endl;
        }
        
    }
    cout<<endl;
    
    
    
    
    
}

return 0;
}