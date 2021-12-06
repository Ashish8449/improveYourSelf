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

tc(t)
{
     ll k;
     cin>>n>>k;
     vl v(n);
     input_array(v);
     ll sum= accumulate(all(v), 0);
     if(sum==0){
         cout<<0<<endl;

     }else {

         vl integer;
         for (ll i = 0; i < n; i++)
         {
             if(v[i])integer.pb(i);
         }
         for (ll i = 0; i < n; i++)
         {
             if(v[i])sum+=2*k;
             else{
                 ll time=INT64_MAX;
                 auto z= lower_bound(all(integer), i)-integer.begin();
                if(z==0){
                    time=min(integer[z]-i, i +(n-integer.back()));

                    
                }
              else  if(z==integer.size()){
                    time=min(i-integer.back(), integer.front()+n-i);
                }
                else{
                    time=min(integer[z]-i ,i-integer[z-1]);
                }
                 sum+= max(ll(0), 2*(k-time));
             }
         }
         cout<<sum<<endl;
         
         
     }
     

}
return 0;
}