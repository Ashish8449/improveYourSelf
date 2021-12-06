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
// #define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define pb               push_back
// #define mp               make_pair
// #define fi                first
// #define se                second
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
// bool mycom(pair<ll,ll>p1, pair<ll,ll>p2){
//     if(p1.first==p2.first)return p1.second>p2.second;
//     return p1.first>p2.first;
// }
// ll gcd(ll a,ll b)       {if(b==0)return a; return gcd(b, a % b);}
// ll lcm(ll a,ll b)       {return (a*b)/gcd(a,b);}

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
// {  ll k;
//      cin>>n>>k;
//      vector<pair<ll,ll>>v(k);
//      for (ll i = 0; i < k; i++)
//      {
//          cin>>v[i].first;
//          cin>>v[i].second;
//      }
//      sort(all(v), mycom);
//      ll ans=0, l=1, z=n;
//      for (ll i = 0; i < k; i++)
//      {
//          l=lcm(l,v[i].second);
//          ans+=(max(z- (n/l),0ll))*v[i].first;
//          z=n/l;

//      }
//      cout<<ans<<endl;

// }
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool comp(pair<long long int, long long int> p1, pair<long long int, long long int> p2)
{
    return (p1.first >= p2.first);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        //  long long int ans[n+1];
        //  for(int i=0;i<=n;i++)
        //     ans[i]=0;
        vector<pair<long long int, long long int>> a;
        for (int i = 0; i < m; i++)
        {
            long long int x, y;
            cin >> x >> y;
            a.push_back(make_pair(x, y));
        }
        
        sort(a.begin(), a.end(), greater<>());
        for (int i = 0; i < m; i++)
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }
        
        long long int sum = 0;
        int j = 0, k = n;
        long long int i = 1; // as we start from 1 to n
        while (j < m)
        {
            i = (i * a[j].second) / (__gcd(a[j].second, i));
            sum += (n - (k / i)) * (a[j].first);
            n = k / i;
            if (n <= 0)
                break;
            j++;
            
        }

       
        cout << sum << endl;
    }
    return EXIT_SUCCESS;
}