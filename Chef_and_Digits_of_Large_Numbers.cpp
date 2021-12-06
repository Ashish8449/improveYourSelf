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
#define inf                44000000+100
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
vl fac(15,1);


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll a, b, c, d, e, f, m, n, p, q;
string s, r;
vl ans;
c = 0;
for (ll i = 1; i < 15; i++)
{
    fac[i]=fac[i-1]*i;
}
// ans.pb(0);
for (ll i = 0; i < inf; i++)
{
    ll multi = 1;
    a = i;
    b = 0;
    while (a)
    {
        b++;
        multi *= (a % 10);
        a /= 10;
    }
    if (fac[b] <= multi && i != 0)
        c++;
    if(i%100==0)ans.pb(c);
}
// print_array(ans,'\n');
// cout<<ans.size();
tc(t)
{
     cin>>n;
    ll out= ans[n/100];
   for (ll i = n-n%100; i <=n; i++)
   {
       ll multi = 1;
       a = i;
       b = 0;
       while (a)
       {
           b++;
           multi *= (a % 10);
           a /= 10;
       }
       if (fac[b] <= multi && i != 0)
        out++;
    //   dbg(out);
   }
   cout<<out<<endl;
}
return 0;
}