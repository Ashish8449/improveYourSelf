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
    bool flg=1;
     cin>>n>>s;
    if(n%2)cout<<"NO"<<endl;
    else {
        vl v(26, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i]-'a']++;
        }
      vector<pair<int, char> >vch;
      for (int i = 0; i < 26; i++)
      {
          vch.push_back(mp(v[i], 'a'+i));
      }
      sort(vch.begin(),vch.end());
      reverse(vch.begin(),vch.end());
      if(vch[0].first>n/2){
          cout<<"NO"<<endl;
          continue;
      }
      cout<<"YES"<<endl;
    //   sort(all(s));
    //   cout<<s<<endl;
      r="";
        string z= "";
        int i =0, j=25;
     while(r.length()<n/2||z.length()<n/2){
         while(!vch[i].first){
             i++;
         }
         z+=vch[i].second;
         vch[i].first--;
          while(!vch[j].first){
             j--;
         }
         r+=vch[j].second;
         vch[j].first--;
         

     }
   
     
       cout<<r+z<<endl;
    
      
      
      
        
        
    }
}
return 0;
}