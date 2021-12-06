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
vl spf(inf,0);
void sieve()
{
spf[1] = 1;
for (int i=2; i<inf; i++)
spf[i] = i;
for (int i=4; i<inf; i+=2)
spf[i] = 2;
for (int i=3; i*i<inf; i++)
{
if (spf[i] == i)
{
for (int j=i*i; j<inf; j+=i)
if (spf[j]==j)
spf[j] = i;
}
}
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
sieve();
ll a, b,c;
cin>>a>>b>>c;
ll ans=0;
for (ll i = 1; i <=a; i++)
{
    for (ll j = 1; j <=b; j++)
    {
        for (ll k = 1; k <=c; k++)
        {
            ll n=i*j*k;
            if(spf[n]==n){
                if(n==1)ans++;
                else
                ans+=2;
            }
            else {
                unordered_map<ll,ll>map;
                while (n!=1)
                {
                    map[spf[n]]++;
                n/=spf[n];
                }
                ll temp=1;
                for(auto i:map){
                 temp*=(i.second+1);
                }
                ans+=temp;
                
            }

        }
        
    }
    
}
cout<<ans<<endl;


     
return 0;
}