
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
bool mysor(tuple<ll,ll,ll>t1, tuple<ll,ll,ll>t2){
    if(get<0>(t1)==get<0>(t2)){
        return get<2>(t1)>=get<2>(t2);
    }
    return get<1>(t1)<=get<2>(t2);
}
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
{  cin>>n;
   vector<tuple<ll,ll,ll>>v(n),ans;
   for (ll i = 0; i < n; i++)
   {
       cin>>get<1>(v[i]);
       get<2>(v[i])=i+1;
   }

   for (ll i = 0; i < n; i++)
   {
       cin>>get<0>(v[i]);
      
   }
   sort(all(v));
   ll l=0;
   for (ll i = 0; i < n; i++)
   {
       //    cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
       if (l + get<1>(v[i]) <= get<0>(v[i]) )
       {
           ans.pb(make_tuple(get<2>(v[i]), l, l + get<1>(v[i])));
           l += get<1>(v[i]);
       }
   }
//    for (ll i = 0; i < n; i++)
//    {
//        cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<endl;
//    }
   
   cout<<ans.size()<<endl;
   for (ll i = 0; i < ans.size(); i++)
   {
       cout<<get<0>(ans[i])<<" "<<get<1>(ans[i])<<" "<<get<2>(ans[i])<<endl;
   }
   
   
   
   
   
}
return 0;
}