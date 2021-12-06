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

//tc(t)
{
    cin>>n>>m;
    vvl v(n, vl(m));
    for (ll i = 0; i < n; i++)
    {
        input_array(v[i]);
    } 
    // dbg(v.size());
    vvl prefixsum(n, vl(m, -1));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j <m; j++)
        {
            if(i==0)prefixsum[i][j]=v[i][j];
            else{
                if(v[i][j]==0)prefixsum[i][j]=0;
                else prefixsum[i][j]=prefixsum[i-1][j]+v[i][j];
            }
        }

    }
    ll max_area=0;

  for (ll i = 0; i < n; i++)
  {
    //   nsl
    stack<pair<int, int>>st;
 
    vl nsl;

  
    for (ll j = 0; j < prefixsum[i].size(); j++)
    {
       if(st.empty()){
           nsl.push_back(-1);
       }else if(st.size()>0&&st.top().first<prefixsum[i][j])
       {
           nsl.push_back(st.top().second);
       }
       else{
           while (st.size()>0&&st.top().first>=prefixsum[i][j])
           {
               st.pop();
           }
           if(st.empty()){
               nsl.push_back(-1);
               
           }else{
               nsl.push_back(st.top().second);
           }
           
       }
       st.push(mp(prefixsum[i][j], j));
    }
   
    // print_array(nsl);

    vl nsr;
    while (!st.empty())
    {
        st.pop();
    }
    


  
    for (ll j=prefixsum[i].size(); j>=0; j--)
    {
        if (st.empty())
        {
            nsr.push_back(prefixsum[i].size());
        }
        else if (st.size() > 0 && st.top().first < prefixsum[i][j])
        {
            nsr.push_back(st.top().second);
        }
        else
        {
            while (st.size() > 0 && st.top().first >= prefixsum[i][j])
            {
                st.pop();
            }
            if (st.empty())
            {
                nsr.push_back(prefixsum[i].size());
            }
            else
            {
                nsr.push_back(st.top().second);
            }
        }
       st.push(mp(prefixsum[i][j], j));
    }
   reverse(all(nsr));
   
    // print_array(nsr);
    // print_array(prefixsum[i]);
    
     for (ll j = 0; j < nsr.size()-1; j++)
     {
         ll area= (nsr[j]-nsl[j]-1)*prefixsum[i][j];
        //  dbg(area);

         max_area=max(max_area, area);
     }
     

  }
  cout<<max_area<<endl;
  
    
    
   
  
    
    
    
    
   
    

     
}
return 0;
}