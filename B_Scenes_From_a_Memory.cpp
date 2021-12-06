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
#define inf               100
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
vl seive(100,1);

seive[1]=0,seive[0]=0;
for(ll i=2; i*i<=inf;i++)
{
 if(seive[i]==1)
for(ll j=i*i;j<inf; j+=i)
{
 seive[j]=0;
}
}

// cout<<seive[4]<<endl;
tc(t)
{
     cin>>n>>s;
     bool flg=0;
     for (ll i = 0; i < n; i++)
     {
         if(s[i]!='0'){
             if(!seive[s[i]-'0']){
                 cout<<1<<endl;
                 cout<<s[i]<<endl;
                 flg=1;
                 break;
             }
         }
     }
     if(!flg){
         for (ll i = 0; i < n; i++)
         {
             for (ll j = i+1; j < n; j++)
             {
                 ll num= 10*(s[i]-'0')+s[j]-'0';
                 if(!seive[num]&&num){
                     cout<<2<<endl;
                     cout<<num<<endl;
                     flg=1;
                     break;
                 }
             }
             if(flg)break;
             
         }
         
     }
     

}
return 0;
}