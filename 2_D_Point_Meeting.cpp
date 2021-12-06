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
ll n;
ll func(int x1, int y1, vl &x, vl &y)
{
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        a = x1 - x[i];
        b = y1 - y[i];
        // dbg(a);
        // dbg(b);
        if (a == 0 && b == 0)
        {
        }
        else if ((a != 0 && b == 0) || (b != 0 && a == 0) || (a == b) || (abs(a) == abs(b)))
        {
            ans++;
        }
        else
        {
            ans += 2;
        }
    }
    return ans;
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
ll a, b,c,d,e,f,m,p,q;
string s,r;

tc(t)
{
    cin>>n; 
    vl x(n), y(n);
    input_array(x);
    input_array(y);
//    print_array(x);
//    print_array(y);
    ll ans=INT64_MAX;
        for (int i = 0; i <x.size(); i++)
        {
            for (ll j = 0; j < y.size(); j++)
            {
           
                ans=min(ans, func(x[i],y[j],x,y));
                // dbg( func(x[i],y[j],x,y));
                // cout<<x[i]<<y[j]<<endl;
            }
            
        }
        cout<<ans<<endl;
        
    
    
}
return 0;
}