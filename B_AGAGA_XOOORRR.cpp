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
     vl v(n);
     input_array(v);
     map<ll,ll>map;
     vl tem;
     bool flg=0;
     while (tem.size()!=2&&v.size()!=2)
     {
         if(tem.empty()){
           for (ll i = 0; i < v.size(); i+=2)
           {   
               if(i+1>=v.size())break;
               tem.pb(v[i]^v[i+1]);
               map[v[i]^v[i+1] ]++;
           }
           
        
           if(v.size()%2){
               tem.pb(v[v.size()-1]);
               map[v[v.size()-1]]++;
           }
           v.clear();
          
         
         cout<<"#"<<map[v[v.size()-1]]<<endl;
         }
         else {

             for (ll i = 0; i < tem.size(); i+=2)
           {    
            
                if(i+1>=tem.size())break;
               v.pb(tem[i]^tem[i+1]);
               map[tem[i]^tem[i+1]]++;
           }
           if(tem.size()%2){
               v.pb(tem[tem.size()-1]);
               map[tem[tem.size()-1]]++;
           }
           tem.clear();
            
         }
         if(map.size()==1)flg=1;
         map.clear();
        a=tem.size();
        // b=v.size();
        // dbg(a);
        // dbg(b);
        // abg(b);
     }
     if(tem.size()==2&&tem[0]==tem[1]){
         flg=1;
     }
     if(v.size()==2&&v[0]==v[1])flg=1;
     if(flg)cout<<"YES"<<endl;
     else  cout<<"NO"<<endl;
     

}
return 0;
}