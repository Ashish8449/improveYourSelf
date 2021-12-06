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
vl ans;
void solve(ll n,ll m, ll k , ll i, ll j,ll c){
    if(k<=0){
        if(i==n&&j==m)ans.pb(c);
        return;
    }
    if(i==n&&j==m)return;
    if(j<m)
    solve(n, m, k-i,i,j+1,c+i);
    if(i<n)
    solve(n, m, k-j,i+1,j,c+j);
    return;
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
     cin>>n>>m>>a;
    //  n--;
    //  m--;
    b=(a-(n-1)-n*(m-1));
    c=(a-(m-1)-(-1+n)*m);
    // dbg(b);
    // dbg(c);
    // solve(n,m,a,1,1,0);
    // sort(all(ans));
    // b=lower_bound(ans.begin(),ans.end(),a)-ans.begin();


    if(b==0||c==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // ans.clear();

}
return 0;
}