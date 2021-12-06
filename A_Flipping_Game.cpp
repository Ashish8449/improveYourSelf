// /*
// *
// *************************************************************
// * AUTHOR : Ashish Gururani                                  *
// * Language: C++14                                           *
// * Purpose: -                                                *
// * IDE used: Visual Studio Code.                             *
// *************************************************************
// *
// Comments will be included in practice problems if it helps ^^
// */
// #include <bits/stdc++.h>
// typedef long             long ll;
// typedef long             double ld;
// #define rep(i,n,k)       for(ll i=0;i<n;i+=k)
// #define rrep(i,n,k)      for(ll i=n;i>=0;i-=k)
// #define rep1(i,n,k)      for(ll i=1;i<n;i+=k)
// #define vi               vector<int>
// #define vl               vector<ll>
// #define vs               vector<string>
// #define vvi              vector<vi>
// #define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define pb               push_back
// #define mp               make_pair
// #define fi                first
// #define se                second
// #define tc(t)            long long t;cin>>t;while(t--)
// #define all(x)           (x).begin(), (x).end()
// #define dbg(x)           cout<<x<<" = "<<x<<endl
// #define inf                 1e6+5
// #define mod              ll(1e9+7)
// using namespace std;

// template<typename T>
// void print_array(const T &arr, char c = ' ')
// {
// for (auto x : arr)
// {
// cout << x << c;
// }
// cout << endl;
// }
// template<typename T>
// void input_array(vector< T> &arr  )
// {
// for (ll i = 0; i < arr.size(); i++)
// {
//     cin>>arr[i];
// }

// }
// int main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif
// fast;
// ll a, b,c,d,f,m,n,p,q;
// string r;
// // ll n;
// cin>>n;
// vl v(n);
// input_array(v);
// // print_array(v);
// vector<pair<ll,ll>>h;
// ll c0=0,c1=0;

// h.pb(mp(c0,c1));
// for (ll i = 0; i < n; i++)
// {
//     if(v[i])c1++;
//     else c0++;
//   h.pb(mp(c0,c1));
// }
// ll dif=0;
// ll s=-1,e=-1;
// for (ll i = 0; i < h.size(); i++)
// {
//     for (ll j = i; j < h.size(); j++)
//     {
//         c0=h[j].first-h[i].first;
//         c1=h[j].second-h[i].second;
//         // cout<<c0<<" "<<c1<<endl;
        
//         if(c0>=c1){
//         //     // cout<<c0-c1<<endl;
//             if(dif<=(c0-c1)){
                
//              s=i, e=j-1;
//              dif=c0-c1;
//             //  if(dif==2)cout<<i<<" "<<j<<endl;

//         //   dbg(s);
//         //   dbg(e);
//         //      cout<<dif<<endl;

//             }
//         }

//     }
    
// }
// // for (ll i = 0; i < h.size(); i++)
// // {
// //     cout<<h[i].first<<" "<<h[i].second<<endl;
// // }

// ll ans=0;
// for (ll i = 0; i < v.size(); i++)
// {
//     if(v[i]==1&&!(i>=s&&i<=e))ans++;
//     if(v[i]==0&&(i>=s&&i<=e))ans++;

// }
// if(h[n].second==n)cout<<n-1;
// else
// cout<<ans<<endl;



// return 0;
// }
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
ll a, b,c,d,e,f,m,n,p,q,s;
// string s,r;
cin>>n;
vl v(n);
input_array(v);
 s=-1;e=-1,d=0;
for (ll i = 0; i < n; i++)
{ 
    ll c0=0,c1=0,k=i;
    while (c0>=c1&&i<n)
    {
        if(v[i])c1++;
        else c0++;
       
        if(d<=c0-c1){
            
            s=k,e=i;
            d=c0-c1;
    
        }
        i++;
    }
    if(i<n)i--;
    
    
}
if(s==-1&&e==-1)cout<<n-1<<endl;
else {
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
            if(v[i]==1&&!(i>=s&&i<=e))ans++;
            if(v[i]==0&&(i>=s&&i<=e))ans++;
    }
    cout<<ans<<endl;
    

}




return 0;
}