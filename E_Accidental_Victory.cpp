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
     ll n;
     cin>>n;
     vl v(n),temp(n);
     rep(i,n,1){cin>>v[i]; temp[i]=v[i];}
     sort(all(temp));
     ll prefix=0,ans=0;
     for (ll i = 0; i < n; i++)
     {
        while (i<n&&prefix>=temp[i])
        {
            prefix+=temp[i];
            i++;
        }
        if(i<n){
            ans=i;
            prefix+=temp[i];
        }
        // cout<<prefix<<" "<<ans<<endl;
        // i--;
        
     }
    //  cout<<ans<<endl;
     ll a=temp[ans];
     vl out;
     for (ll i = 0; i < n; i++)
     {
         if(v[i]>=a)out.pb(i+1);
     }
    //  cout<<endl;
    cout<<out.size()<<endl;
    print_array(out);
     

     

 }    
return 0;
}