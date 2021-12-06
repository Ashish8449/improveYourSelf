// /*
// *
// *************************************************************
// * AUTHOR : Ashish Gururani                                  *
// * Language: C++14                                           *
// * Purpose: -                                                *
// * IDE used: Visual Studio Code.                             *
// *************************************************************
// *
// Comments will be included in practice problems if it helps ^^
// */
// #include <bits/stdc++.h>
// typedef long             long ll;
// typedef long             double ld;
// #define rep(i,n,k)       for(ll i=0;i<n;i+=k)
// #define rrep(i,n,k)      for(ll i=n;i>=0;i-=k)
// #define rep1(i,n,k)      for(ll i=1;i<n;i+=k)
// #define vi               vector<int>
// #define vl               vector<ll>
// #define vs               vector<string>
// #define vvi              vector<vi>
// #define vvl              vector<vl>
// #define vvs              vector<vs>
// #define mem(a,b)         memset(a,b,sizeof(a))
// #define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define pb               emplace_back
// #define mp               make_pair
// #define fi               first
// #define se               second
// #define nline          "\n"
// #define tc(t)            long long t;cin>>t;while(t--)
// #define all(x)           (x).begin(), (x).end()

// #define dbg(x)           cout<<#x<<" = "<<x<<endl
// #define inf                 1e6+5
// #define mod              ll(1e9+7)
// using namespace std;

// template<typename T>
// void print_array(const T &arr, char c = ' ')
// {
// for (auto x : arr)
// {
// cout << x << c;
// }
// cout << endl;
// }

// template<typename T>
// void input_array(vector< T> &arr)
// {
// for (ll i = 0; i < arr.size(); i++)
// {
// cin>>arr[i];
// }
// }
// void zebra_crossing()
// {
//     ll n,k;
//     string s;
//     cin>>n>>k>>s;
   

//     char ch = s[0];
//     int cnt =0;
//     for(int i=1;i<n;i++) {
//         if(ch!= s[i]) {
//             cnt++;
//             ch = s[i];
//         }
//     }

//     if(cnt<k) {
//         cout<<-1<<endl;
//         return;
//     }
//     if(s[0]=='0') {
//         if(k%2) {
//             for(int i=s.size()-1; i>=0; i--) {
//                 if(s[i] == '1') {
//                     cout<<i+1<<endl;
//                     return;
//                 }
//             }
//         }
//         else {
//             for(int i=s.size()-1; i>=0; i--) {
//                 if(s[i] == '0') {
//                     cout<<i+1<<endl;
//                     return;
//                 }
//             }
//         }
//     }
//     else {
//         if(k%2) {
//             for(int i=s.size()-1; i>=0; i--) {
//                 if(s[i] == '0') {
//                     cout<<i+1<<endl;
//                     return;
//                 }
//             }
//         }
//         else {
//             for(int i=s.size()-1; i>=0; i--) {
//                 if(s[i] == '1') {

//                     cout<<i+1<<endl;;
//                     return;
//                 }
//             }
//         }
//     }

// }


// vvl adj;
// vl vis;
// int main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif
// fast;
// ll a, b,c,d,e,f,m,n,p,q;
// string s,r;

// tc(t)
// {
//     zebra_crossing();
// }
// return 0;
// }

#include <iostream>
#include <string>
using namespace std;
 #define dbg(x)           cout<<#x<<" = "<<x<<endl
int main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    string s;
	    cin>>s;
	    
	    int st = s[0] - '0';
	    
	    int w,b,e;
	    if(k%2 == 0)
	    {
	        w = k/2;
	        b = k/2;
	        e = st;
            // cout<<w<<" "<<b<<" "<<e<<endl;
	      
	    }
	    else
	    {
	        if(st==1)
	        {
	            e=0;
	            b = (k/2) + 1;
	            w = k/2;
	           
	        }
	        else
	        {
	            e=1;
	            w = (k/2) +1;
	            b = k/2;
	        }
            // cout<<w<<" "<<b<<" "<<e<<endl;
	    }
	    
	    int count_1[n];
	    for(int i=0; i<n; i++)
        {    count_1[i] = 0;
        //cout<<count_1[i];
        }
	   
	    for(int i=1; i<n; i++)
	    {   int ch = s[i] - '0';
	   
	        count_1[i] = count_1[i-1] + ch;
	  
	    }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<count_1[i]<<" ";
        // }
        // cout<<endl;
        
	    int i;
	    for(i=n-1; i>=1; i--)
	    {   
	        int ch = s[i] - '0';
	        if(ch == e)
	        {     
                // dbg(i-count_1[i]);
	            if((count_1[i] >= w) && ((i-count_1[i]) >= b))
	            {
	                cout<<i+1<<endl;
	                break;
	            }
	            else
	            {
	                cout<<"-1"<<endl;
	                break;
	            }
	        }
	    }
	    if(i==0)
	        cout<<"-1"<<endl;
	}
	return 0;
} 

