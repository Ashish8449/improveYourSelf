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
#define dbg(x)           cout<<x<<" = "<<x<<endl
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
bool mycmp(pair<ll,ll>p1, pair<ll,ll>p2){
    if(p1.first==p2.first)return p2.second<p1.second;
   return p1.first<p2.first;
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
    vector<pair<ll,ll>>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i].first;
    }
    rep(i,n,1)cin>>v[i].second;
    sort(all(v),mycmp);
    unordered_map<ll,ll>map;
    vl prefix(n+1,0);
    for (ll i = 0; i < n; i++)
    {   if(i==0||(v[i-1].first!=v[i].first))map[v[i].first]=i;
        prefix[i+1]=prefix[i]+v[i].second;

    }
    for (ll i = 0; i < n; i++)
    {   
        ll j=0,k=i,ans=0;
        while (j+i<n)
        {
            if(v[j].first==v[j+i].first){
                ans+=prefix[j+i+1]-prefix[j];
                j+=i+1;
            }else{
                j=map[v[j+i].first];
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    
    
    
    // for (ll i = 0; i < n; i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    
    // }
    
    // vector<vi>vv;
    // for (ll i = 0; i < n; )
    // {
    //     ll k=i;
    //     vi z;
    //     while (v[k].first==v[i].first)
    //     {
    //         z.pb(v[i].second);
    //         i++;
    //     }
    //     // reverse(all(z));
    //     vv.pb(z);
        
    // }
    // vector<vl>pre;
    // for (ll i = 0; i < vv.size(); i++)
    // {
    //     c=0;
    //     vl z;
    //     z.pb(c);
    //     for (ll j = 0; j < vv[i].size(); j++)
    //     {
    //        c+=vv[i][j];
    //        z.pb(c);
    //     }
    //     pre.pb(z);
        
        
    // }
    // for (ll i = 1; i < n+1; i++)
    // { 
    //     ll sum=0;
    //     for (ll j = 0; j < vv.size(); j++)
    //     {
    //         ll sz=vv[j].size();
    //         sz=(sz/i)*i;
    //         // cout<<pre[j][sz]<<" ";
    //         // sz--;
    //         sum+=pre[j][sz];
    //     }
    //     cout<<sum<<" ";
        
    // }
    // cout<<endl;
    
    
    
    
     
}
return 0;
}