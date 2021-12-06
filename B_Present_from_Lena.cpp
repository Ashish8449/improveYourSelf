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
#define inf 1e6+5
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;

ll n,t;
cin>>n;
vector<string >s;
t=n;
ll i=0;
while (t>=0)
{ 
    string p;
    for (ll j = 0; j < 2*(n-i); j++)
    {
        p.pb(' ');
    }
    // cout<<char(48+2);
    for (ll j = 0; j <=i; j++)
    {
        char c=char(48+j);
        // cout<<c<<" ";
        p.pb(c);
        if(i!=0)
        p.pb(' ');
    }
    //  dbg(p);
    for (ll j = i-1; j >=0; j--)
    {
         p.pb(char(48+j));
        if(j!=0)
        p.pb(' ');
    }
    
    
    // cout<<p<<endl;
    t--;
    i++;
    s.pb(p);


   
}
for (ll i = 0; i <= n; i++)
{
    cout<<s[i]<<endl;
}
for (int i = n - 1; i >= 0; i--)
{
    cout<<s[i]<<endl;
}



return 0;
}