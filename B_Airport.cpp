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
ll n,m;
cin>>n>>m;
vl v(m);
rep(i,m,1){
    cin>>v[i];
}
sort(all(v));
ll mx=0,mm=0;
ll i=0;
ll z=n;
while (n>0)
{   if(v[i]<=n){
    ll a=min(v[i],n);
    mm+=((a*(a+1))/2);
    n-=a;}
    else {
        // dbg("s");
        ll a=v[i];
        while (n>0)
        {
            mm+=a;
            a--;
            n--;

        }
        // dbg(mm);
        // dbg(n);
        // dbg("end");
        

    }
    i++;
}i=n-1;
n=z;
while (n--)
{
    sort(all(v));
    mx+=v[m-1];
    v[m-1]--;
    
    
    // cout<<mx<<" "<<endl;
}

cout<<mx<<" "<<mm<<endl;

     
return 0;
}