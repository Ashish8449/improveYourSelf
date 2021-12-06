// /*
/*
*************************************************************
* AUTHOR : Ashish Gururani                                  *
* Language: C++14                                           *
* Purpose: -                                                *
* IDE used: Visual Studio Code.                             *
*************************************************************
*
Comments will be included in practice problems if it helps ^^
*/
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
// #define vvl              vector<vl>
// #define vvs              vector<vs>
// #define mem(a,b)         memset(a,b,sizeof(a))
// #define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define pb               emplace_back
// #define mp               make_pair
// #define fi               first
// #define se               second
// #define nline          "\n"
// #define tc(t)            long long t;cin>>t;while(t--)
// #define all(x)           (x).begin(), (x).end()

// #define dbg(x)           cout<<#x<<" = "<<x<<endl
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
// void input_array(vector< T> &arr)
// {
// for (ll i = 0; i < arr.size(); i++)
// {
// cin>>arr[i];
// }
// }

// vvl adj;
// vl vis;
// int main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif
// fast;
// ll a, b,c,d,e,f,m,n,p,q;
// string s,r;

// tc(t)
// {
//      cin>>n;
//      vl v(n),B(n);
//       a=0;
//       for (ll i = 0; i < n; i++)
//       {
//           cin>>b;
//           v[i]=b-a;
//           a=b;
//       }
//         a=0;
//       for (ll i = 0; i < n; i++)
//       {
//           cin>>b;
//           B[i]=b;
        
//       }
//       ll ans=0;
//     //   print_array(v);
//     //   print_array(B);
//       for (ll i = 0; i < n; i++)
//       {
//           if(B[i]<=v[i])ans++;
//       }
//       cout<<ans<<endl;
      
// }
// return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        {   
            if(i==0 && a[i]>=b[i])
            count++;
            else if((a[i]-a[i-1])>=b[i])
            count++;
        }
        cout<<count<<endl;
    }
    return EXIT_SUCCESS;
}