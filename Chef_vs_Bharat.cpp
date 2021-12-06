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
// #define inf 5107015
// #define mod ll(1e9+7)
// using namespace std;
// ll power(ll n,ll p){
//     ll res=1;
//     while (p)
//     {
//         if(p%2){
//             p--;
//             res*=n;
//             res%=mod;
//         }else {
//         n*=n;
//         p/=2;
//         n%=mod;
//         }
//     }
//     return res;
    
// }


// int main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif
// fast;
// vl a;
// a.pb(0);
// // for (ll i = 1; i < inf; i++)
// // {
// //     ll n=i;
// //     vl f,b;
// //     while (n)
// //     {
// //         f.pb(n%10);
// //         b.pb(n%10);
// //         n/=10;
// //     }
// //     if(f.size()%2){
// //         reverse(all(b));
// //         bool flg=1;
// //         for (ll i = 0; i < f.size(); i++)
// //         {
// //             if(f[i]!=b[i]){
// //                 flg=0;
// //                 break;

// //             }
// //         }
// //         if(flg) a.pb(i);
        
// //     }
    
// // }
// //
// // cout<<power(2,8)<<endl;
// // for (ll i = 1; i < a.size(); i++)
// // {
// //     cout<<a[i]<<endl;
// // }
// for (ll i = 1; i < 100000+5; i++)
// {
//     ll tem=i;
//     ll n= i/10;
//     while (n)
//     {
//         tem=tem*10+n%10;
//         n/=10;
//     }
//     a.pb(tem);
    
// }
// ll sum=0;

// vl prefix;
// for (ll i = 0; i <= 100000+3; i++)
// {
    
//     sum+=a[i];
//     prefix.pb(sum);

    
// }

//  tc(t){
//     ll l,r;
//     cin>>l>>r;
//     ll p=prefix[r]-prefix[l];
    
//     cout<<power(a[l],p)<<endl;
    

// }




     
// return 0;
// }

//saksham
#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define rrep(i,n,a) for(ll i=n;i>=a;i--)
#define rep1(i,n,k) for(ll i=1;i<=n;i+=k)
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vvi vector<vi> //vector grid
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define maxn 1e6+3
#define inf 1e18
#define modu 1000000007
#define pi 3.14159265358979323846264
#define tc(t) ll t; cin>>t; while(t--)
#define mem(dp,i) memset(dp,i,sizeof(dp))
#define all(x) (x).begin(), (x).end()
#define dbg(x) cout<<x<<" = "<<x<<endl;
using namespace std;
char nn='\n';

ll gcd(ll a, ll b){
   if(b==0)
   return a;
   return gcd(b,a%b);
}
ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
} 
ll power(ll n, ll p){
    ll res=1;
    while(p)
    {
        if(p%2){
            res= (res * n) % modu;
            p--;
        }
        else{
            n= (n * n) % modu;
            p/=2;
        }

    }
    return res;
}

// /--------------------------------------------------------------------------------------------------------/
bool check(ll n){
    ll rev=0,count=0,ori=n;
    while(n!=0)
    {
        ll r=n%10;
        rev=rev*10 +r;

        n/=10;

        count++;
    }
    if((rev==ori) && (count%2==1))
    {
        return true;
    }
    return false;
}
void solve(){
    vl chf;
    rep(i,1,100001)
    {
        if(check(i))
        {
            chf.pb(i);
        }
    }
    for (ll i = 0; i < chf.size(); i++)
    {
        cout<<chf[i]<<" "<<endl;
    }
    

    int q; cin>>q;
    rep(i,0,q)
    {
        ll l,r;
        cin>>l>>r;
        ll prod=1,sum=0;
        for(ll k=l+1;k<=r;k++)
        {
            sum+=chf[k-1]; 
        }
        //cout<<sum;
        prod = ( power(chf[l-1],sum) ) % modu;
        cout<<prod<<nn;
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
    int t=1; 
    //cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}