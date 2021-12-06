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
ll a, b,c,d,e,f,m,n,p,q;
string s,r;

tc(t)
{
     cin>>n;
     vl v(n), v2(n-1);
     input_array(v);
     input_array(v2);
     sort(all(v));
     sort(all(v2));
     reverse(all(v));
     reverse(all(v2));
    //  print_array(v);
    //  print_array(v2);
     ll i=0, j=0;
     a =v2[0]-v[0];
     c=0;
     bool flg=1;
     while(i<n&&j<n-1){
         if(a==v2[j]-v[i]){i++,j++;}
         else{
             i++;
             c++;
         }
         if(c==2){
             flg=0;
             break;
         }

     }
     ll ans=INT64_MAX;
     if(a>=0){
         ans=min(ans, a);
     }
      i=1, j=0;
     b =v2[0]-v[1];
     c=0;
     flg=1;
     while(i<n&&j<n-1){
         if(b==v2[j]-v[i]){i++,j++;}
         else{
             i++;
             c++;
         }
         if(c==1){
             flg=0;
             break;
         }

     }
     if(b>=0)ans=min(ans, b);
     cout<<ans<<endl;
    

}
return 0;
}