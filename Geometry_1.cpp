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

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll a, b,c,d,e,f,m,p,q;
string s,r;

tc(t)
{  ll n;
     cin>>n>>q;
   
     vector<pair<int,int>>v(n);
     for (ll i = 0; i < n; i++)
     {
         cin>>v[i].first;
         cin>>v[i].second;
     } 
     ld area=0, peri=0.0, cot_2=0;
     for (ll i = 0; i < n; i++)
     {
         area += (v[i].first * v[(i + 1) % n].second - v[(i + 1) % n].first * v[i].second);
         a = v[(i - 1+n) % n].first - v[i].first;
         b = v[(i + 1) % n].first - v[(i ) % n].first;
         c = v[(i - 1+n) % n].second - v[i].second;
         d = v[(i + 1) % n].second - v[(i ) % n].second;
         peri += sqrt(a * a + c * c);
         ld cs = ld(a * b + c * d) / (sqrt(a * a + c * c) * sqrt(b * b + d * d));
        //  cout<<cs<<endl;
        //  dbg((cs));
        // cs=abs(cs);
        // if(cs!=1)
         cot_2 += sqrt(ld(1.0 + cs) / ld(1.0 - cs));
        //  dbg(cot_2);
     }
     area=area/2.0;
     area=abs(area);
    //  dbg(area);
    //  dbg(peri);
    //  dbg(cot_2);
     for (ll i = 0; i < q; i++)
     {
         ld s,ti;
         cin>>s>>ti;
        //  cout<<s<<endl;
         ld dis= s*ti;
        //  dbg(dis);
         cout<<fixed<<setprecision(7) <<area+peri*dis+dis*dis*cot_2<<endl;
     }
     
     
     
}
return 0;
}