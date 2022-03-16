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
#define endl          "\n"
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
    cin>>n>>m;
    vvl v(n, vl(m,0));
    ll x1, x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    if((x1+y1)%2!=(x2+y2)%2){
        ll value=1;
        ll value2=2;
        if((x1+y1)%2)value=2, value2=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if((i+j)%2){
                    v[i][j]=value2;
                }else{
                    v[i][j]=value;
                }
            }

            
        }
        for (int i = 0; i < n; i++)
        {
            print_array(v[i]);
        }
        
        
    }else{
       if(x2<n){
           v[x2][y2-1]=3;
       }
       if(y2-2>=0){
           v[x2-1][y2-2]=3;

       }
       if(y2<m){
           v[x2-1][y2]=3;
       }
       if(x2-2>=0){
           v[x2-2][y2-1]=3;
       }
       v[x2-1][y2-1]=2;
               ll value=1;
        ll value2=2;
        if((x1+y1)%2)value=2, value2=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(v[i][j])continue;
                if((i+j)%2){
                    v[i][j]=value2;
                }else{
                    v[i][j]=value;
                }
            }

            
        }
         for (int i = 0; i < n; i++)
        {
            print_array(v[i]);
        }

    }
     
}
return 0;
}