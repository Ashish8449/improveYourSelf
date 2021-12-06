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
vector<string>v;
// void solve (string s, string out){
//     if(s.length()==1){
//         out.pb(s[0]);
//         v.pb(out);
//         return;
//     }
//     solve(s.substr(1),out+s[0]+' ');
//     solve(s.substr(1),out+s[0]);
// }
void case_permutation(string in, string out){
    if(in.empty()){
        v.pb(out);
        cout<<out<<endl;
        return;
    }
    char a;
    if(isupper(in[0]))
    a= char(in[0]+32);
    else  
    a= char(in[0]-32);
    // cout<<a<<endl;
    case_permutation(in.substr(1),out+a);
    case_permutation(in.substr(1),out+char(in[0]));
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
string s="Aakanshi",out="";
case_permutation (s,out);
// cout<<char('a'-32)<<endl;
for (ll i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}

     
return 0;
}