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

tc(t){
    ll n, x;
    cin>>n>>x;
    ll even=0, odd=0;
    rep(i,n,1){
        ll a; cin>>a;
        if(a%2)odd++;
        else even++;
    }
    // dbg(even);
    // dbg(odd);
        if(odd){
        x--;
        odd--;
        x-=min((x/2)*2,(odd/2)*2);
        x-=min(x,even);
        // dbg(x);
        if(x==0){
            cout<<"Yes"<<endl;
        }
        else{
            // if(x%2==0&&x<=odd)cout<<"Yes"<<endl;
            // else 
            cout<<"No"<<endl;
        }


    }
    else cout<<"No"<<endl;
}
     
return 0;
}