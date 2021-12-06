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
    ll n;
    cin>>n;
    map<ll,ll>map;
    vl v(n);
    bool flg=1;
    rep(i,n,1){cin>>v[i];map[v[i]]++;
    if(v[i]<0)flg=0;}
    for (ll i = 0; i < v.size(); i++)
    {
        if(v.size()>300||flg==0){
            flg=0;
            break;
        }
        for (ll j = 0; j < v.size(); j++)
        {
            if(i!=j){
                ll dif= abs(v[i]-v[j]);
                if(map[dif]==0){
                    map[dif]++;
                    v.pb(dif);
                }
            }
            
        }
        
        if(v.size()>300||flg==0){
            flg=0;
            break;
        }
    }
    if(flg){
        cout<<"YES\n";
        cout<<v.size()<<endl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }else {
        cout<<"NO"<<endl;
    }
    
    
}
     
return 0;
}