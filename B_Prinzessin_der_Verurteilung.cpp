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
int Substr(string s2, string s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for(;i<s1.length();i++)
    {
        if(counter==s2.length())
            break;
        if(s2[counter]==s1[i])
        {
            counter++;
        }
      else
        {
            // Special case where character preceding the i'th character is duplicate
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length()?1:0;
}
 

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
vector<string>v;
for (ll i = 0; i < 26; i++)
{
    string s="";
    s+= char('a'+i);
    v.pb(s);
}
for (ll i = 0; i < 26; i++)
{
    string s=v[i];
   for (ll j = 0; j < 26; j++)
{
    // string s="";
    s+= char('a'+j);
    v.pb(s);
    s.pop_back();
}
}for (ll i = 26; i < 702; i++)
{
    string s=v[i];
   for (ll j = 0; j < 26; j++)
{
    // string s="";
    s+= char('a'+j);
    v.pb(s);
    s.pop_back();
}
}


tc(t){
    ll n;
    cin>>n;
    string p;
    cin>>p;
    for (ll i = 0; i < v.size(); i++)
    {
        if(Substr(v[i],p)){
            cout<<v[i]<<endl;
            break;

        }
    }
    
}



     
return 0;
}