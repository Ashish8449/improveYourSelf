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
#define inf                 1e5+5
#define mod              ll(1e9+7)
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

// vector<vi>v(ll(inf),vi(1,1));
//  for (ll i = 2;  i <= inf; i++)
//  {

//          for (ll j = 2*i; j < inf; j += i)
//          {

//              v[j].pb(i);
//          }
//  }

// tc(t)
// {
//      cin>>n;
//      a=1;ll ans=0;
//      for (ll i = 2; i < n+1; i++)
//      {

//        for (ll j = 0; j < v[i].size(); j++)
//        {
//            ans+=(n+(i-v[i][j]))/i;
//        }

//      }

//      cout<<ans<<endl;

// }
// }
// return 0;
// }
// #include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
  vector<tuple<ll,ll,ll>>v;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        for (int c = 1; c <= n; c++)
        {
            for (int b = c; b <= n; b += c)
            {
                if (b % c == 0)
                {
                    for (int a = c; a <= n; a += c)
                    {
                        if (a % b == c)
                        {
                            v.pb(make_tuple(c, b, a));
                            count++;
                        }
                    }
                }
            }
        }
        sort(all(v));
        for (ll i = 0; i < v.size(); i++)
        {
            cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
        }
        
        cout << count << endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         long long count =0;
//         for(int i=2;i<=n;i++)
//         {
//             for(int j=1 ; j<= sqrt(i)  ; j++)
//             {   if(j==1)
//                {
//                 if(n % i !=0 && n%i>= j )
//                      count+= n/i + 1;
//                     else
//                      count+= n/i;
//                    }

//                 else if(i%j == 0)
//                 { // two factor i/j and j

//                     if(n % i !=0 && n%i>= j )
//                      count+= n/i + 1;
//                     else
//                      count+= n/i;
//                     if(n % i !=0 && n%i>= (i/j) )
//                      count+= n/i + 1;
//                     else
//                      count+= n/i;

//                 }
//             }
//         }
//         cout<<count<<'\n';
//     }
//     return 0;
// }