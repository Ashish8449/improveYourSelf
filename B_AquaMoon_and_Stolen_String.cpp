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
#define inf 1e6+5
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
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
tc(t){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v;
    for (ll i = 0; i < m; i++)
    {
        vl z(26,0);
        v.pb(z);
    }
    
    char s[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>s[i][j];
            v[j][s[i][j]-'a']++;

        }
        
    }
    char r[n-1][m];
    for (ll i = 0; i < n-1; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>r[i][j];
            v[j][r[i][j]-'a']--;

        }
        
    }
    string ans;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < 26; j++)
        {
            if(v[i][j]){
                char z=char('a'+j);
                ans.pb(z);
                break;
            }
        }
        // cout<<endl;
        
    }
    cout<<ans<<endl;
    

    
}
     
return 0;
}