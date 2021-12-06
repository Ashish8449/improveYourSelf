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
// #define inf 1e6+5
// using namespace std;

// int main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif
// fast;
// tc(t){
//     ll n,k;
//     cin>>n>>k;
//     vl v(64,0);
//     for (ll i = 0; i < n; i++)
//     {
//         ll a;cin>>a;
//         ll z=0;
//         while (a)
//         {
//             if(a&1)v[z]++;
//             a=a>>1;
//             z++;
            
//         }
        
//     }
//     ll ans=0;
//     for (ll i = 0; i < 64; i++)
//     {
//         ans+=ceil(ld(v[i])/ld(k));
//     }
//     cout<<ans<<endl;
    
    
// }
     
// return 0;
// }
//furan>>>
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        int sum[32];
        for(int i=0;i<=31;i++)
        sum[i]=0;
        
        int place =31;
        
        for(int i=0;i<n;i++)    //binary places sum  
        {   
            int j=a[i];
            place=31;
            while(j)
            {
                sum[place] += j%2;
                j=j/2;
                place--;
            }
        
        }
        // for (int i = 0; i < 32; i++)
        // {
        //     cout<<sum[i]<<endl;
        // }
        
        int ans=0;
        for(int i=0;i<=31;i++)
        {
            if(sum[i]%k==0)
              ans+=sum[i]/k;
            else 
              ans+=sum[i]/k +1;
        }
        cout<<ans<<endl;
        
    }
	return 0;
}