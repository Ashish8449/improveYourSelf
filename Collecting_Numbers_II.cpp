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

vvl adj;
vl vis;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll a, b,c,d,e,f,m,n,p,q;
string s,r;

//tc(t)
{
     cin>>n>>m;
     vector<pair<ll,ll>>v;
     v.pb(mp(0,0));
     vl vec;
     for (ll i = 0; i < n; i++)
     {
         cin>>a;
         v.pb(mp(a, i+1));
         vec.pb(a);
     }
     v.pb(mp(INT64_MAX, INT64_MAX));
     sort(all(v));
     ll ans=1;
     for (ll i = 1; i <= n; i++)
     {
         if(v[i-1].second>v[i].second)ans++;
     }
    //  dbg(ans);
    //  for (ll i = 0; i < n+2; i++)
    //  {
    //      cout<<v[i].first<<" "<<v[i].second<<endl;
    //  }
     
     for (ll i = 0; i < m; i++)
     {
         cin >> a >> b;
         ll i1 = lower_bound(all(v), mp(vec[a - 1], a)) - v.begin();
         ll i2 = lower_bound(all(v), mp(vec[b - 1], b)) - v.begin();
        //  dbg(i1);
        //  dbg(i2);
         bool flga=0, flgb=0, flgc=0, flgd=0;
         c = 0;
         if (v[i1].second < v[i1 - 1].second)
             c++,flga=1;
       
            
         if (v[i1].second > v[i1 + 1].second)
             c++, flgb=1;
        
              
         if (v[i2].second < v[i2 - 1].second &&i2-1!=i1)
             c++, flgc=1;
        
         
         if (v[i2].second > v[i2 + 1].second&&i2+1!=i1)
             c++ , flgd=1;
       
         swap(v[i1].second, v[i2].second);
         swap(vec[a - 1], vec[b - 1]);
        
           d=c;
            c = 0;
         if (v[i1].second < v[i1 - 1].second)
             c++,flga=1;
       
            //   dbg(c);
         if (v[i1].second > v[i1 + 1].second)
             c++, flgb=1;
        
         if (v[i2].second < v[i2 - 1].second &&i2-1!=i1)
             c++, flgc=1;
        
         
         if (v[i2].second > v[i2 + 1].second&&i2+1!=i1)
             c++ , flgd=1;
       
     
     
        // dbg(c);
        // dbg(d);
         ans += (c-d);
         cout << ans << endl;
     }
     
     
     

}
return 0;
}