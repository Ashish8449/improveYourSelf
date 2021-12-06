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
    ll k, n, m;
    cin>>k>>n>>m;
    vl a(n),b(m);
    rep(i,n,1)cin>>a[i];
    rep(i,m,1)cin>>b[i];
    bool flg=1;
    ll i=0,j=0;
    vl ans;
    while (i<n||j<m)
    {
        if(i<n&&a[i]<=k){
            ans.pb(a[i]);
            if(a[i]==0)k++;
            i++;
        }else if(j<m&&b[j]<=k){
            ans.pb(b[j]);
            if(b[j]==0)k++;
            j++;
        }else {
            flg=0;
            break;
        }
    }
    if(flg){
        for (ll i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }cout<<endl;
        
    } else cout<< -1<<endl;
    

}
     
return 0;
}