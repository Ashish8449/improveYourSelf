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
     vl v(n);
     input_array(v);
     ll ce=0, co=0;
     for (ll i = 0; i < v.size(); i++)
     {
        if(v[i]%2)co++;
        else ce++;
     }
     ll ans=INT64_MAX;
     if(n==1)cout<<0<<endl;
     else if (abs(ce-co)>1)cout<<-1<<endl;
     else{
         vl v2;
         for (ll i = 0; i < n; i++)
         {
             v2.pb(v[i]);
         }
         
        //  first number is my odd
        c=0;
        if(co>=ce){
        for (ll i = 0; i < n; i++)
        {
            ll k=i;
            while (k<n&&v[k]%2==0)
            {
                k++;
            }
            // dbg(k);
            while (k>i)
            {
                swap(v[k-1], v[k]);
                c++;
                k--;
            }
            // dbg(c);
            i++;
            k=i;
            while (k<n&&v[k]%2==1)
            {
                k++;
            }
            while (k>i)
            {
                swap(v[k-1], v[k]);
                c++;
                k--;
            }
            
            
        }
        // dbg(c);
        ans=min(ans, c);
        }

        //  first is even 
        if(ce>=co){
        c=0;
        for (ll i = 0; i < n; i++)
        {
            ll k=i;
                k=i;
            
            while (k<n&&v2[k]%2==1)
            {
                k++;
            }
            while (k>i)
            {
                swap(v2[k-1], v2[k]);
                c++;
                k--;
            }
           
            i++;
         while (k<n&&v2[k]%2==0)
            {
                k++;
            }
            while (k>i)
            {
                swap(v2[k-1], v2[k]);
                c++;
                k--;
            }
            
            
        }
        // dbg(c);
        ans=min(ans, c);
        }
        if(ans!=INT64_MAX)
        cout<<ans<<endl;
        else cout<<-1<<endl;
        

     }
}
return 0;
}