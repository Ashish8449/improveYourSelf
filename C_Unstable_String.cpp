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


vl f,b,q;
string s;
cin>>s;

ll n=s.length( );
f.pb(0);
b.pb(n+1);
for (ll i = 0; i < n; i++)
{
    if(s[i]=='?')q.pb(i+1);
}

for (ll i = 0; i < n; i++)
{
    if(s[i]==s[i+1]&&s[i]!='?'){
        f.pb(i+1);
    }
    ll c=0;
    ll k=i;
    bool flg=0;
    while (s[i]=='?'&&i<s.length())
    {
        i++;
        c++;
        flg=1;
    }
    if(c%2&&s[i]==s[k]&&flg){
        f.pb(i);
    }
    if(c%2==0&&s[i]!=s[k]&&flg){
        f.pb(i);
    }
    
}for (ll i = n-1; i >= 0; i--)
{
    if(s[i]==s[i-1]&&s[i]!='?'){
        b.pb(i+1);
    }
    ll c=0;
    ll k=i;
    bool flg=0;
    while (s[i]=='?'&&i>=0)
    {
        i--;
        c++;
        flg=1;
    }
    if(c%2&&s[i]==s[k]&&flg){
        f.pb(i);
    }
    if(c%2==0&&s[i]!=s[k]&&flg){
        f.pb(i);
    }
    
}
print_array(f);

}
     
return 0;
}