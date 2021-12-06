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
vl spf(inf);
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < inf; i++)
        spf[i] = i;
    for (int i = 4; i < inf; i += 2)
        spf[i] = 2;
    for (int i = 3; i * i < inf; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < inf; j += i)
                if (spf[j] == j)
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
ll a, b,c,d,e,f,m,n,p,q;
string s,r;
sieve();


tc(t)
{
     ll n;
     cin>>n;
     vl v(n),A;
     input_array(v);
     map<int,int>M, check;
     for (ll i = 0; i < n; i++)
     {
         a=v[i];

         while (spf[a] != a)
         {
             check[ spf[a]]++;
            //  cout<<spf[a]<<" ";
             a /= spf[a];
         }
         check[a]++;
         ll ans=1;
         for (auto x : check)
         {

             if (x.second % 2)
             {
                 ans *= x.first;
             }
         }
         M[ans]++;
         A.pb(ans);
         
         check.clear();
         

     }

    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        ans+=(n-M[A[i]]);
    }
    cout<<ans/2<<endl;
    
     

}
return 0;
}