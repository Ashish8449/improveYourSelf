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
string s,sufix,prefix;
cin>>s;
vl v(26,0);
// dbg(s);
for (ll i = 0; i < s.length(); i++)
{
    v[int(s[i]-'A')]++;
}
// print_array(v);
ll c=0;
for (ll i = 0; i < 26; i++)
{
    if(v[i]%2)c++;
}
// dbg(c);
if(c>1)
cout<<"NO SOLUTION"<<endl;
else if(c==1&&s.length()%2==0) 
cout<<"NO SOLUTION"<<endl;
else {
    ll k=-1;
    ll i=0;
    while (i<26)
    {
        if(v[i]){
        // dbg("yeds");

            if(v[i]==1){
            k=i;
            i++;
        }
         else{
            char c=char('A'+i);
            // cout<<c<<endl;
            prefix.pb(c);
            sufix.pb(c);
            v[i]--;
            v[i]--;
            }
        }
        else {
            i++;
        }

    }
    if(k!=-1)
    prefix.pb(char('A'+k));
    

}
reverse(all(sufix));
cout<<prefix<<sufix<<endl;




     
return 0;
}