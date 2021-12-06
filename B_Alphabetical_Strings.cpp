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

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
tc(t){
    string s;
    cin>>s;
    char a='a';
    bool flg=1;
    ll z=-1;
    for (ll i = 0; i < s.length(); i++)
    {
        if(s[i]=='a'){

            z=i;
            break;
        }
    }
    // dbg(z);
    if(z==-1){
        cout<<"NO"<<endl;
    }else{

        ll right=z+1,i=1;
        ll left=z-1;
        char a='a';
        while (left>=0||right<s.length())
        {
            if(s[left]==char('a'+i)&&s[right]!=char('a'+i)&&left>=0){
                left--;
            }else if( s[right]==char('a'+i)&&s[left]!=char('a'+i)&&right<s.length()){
                right++;
            }else{
                flg=0;
                break;
            }
            i++;
        }
        if(flg)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}
     
return 0;
}