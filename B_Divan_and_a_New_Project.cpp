// #include<bits/stdc++.h>
// using namespace std;
// bool comp(pair<int,int> a,pair<int,int> b)
// {
//     return a.second>=b.second;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>  v1(n);
//         vector<pair<int,int>> v;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v1[i];
//             v.push_back({i,v1[i]});
//         }
//         sort(v.begin(),v.end(),comp);
//         // for(auto x: v)
//         // {
//         //     cout<<x.first<<" "<<x.second<<endl;
//         // }
//         int ans[n+1];
//         ans[0]=(n+1)/2;
//         int index=0;
//         for(int i=0;i<n;i++)
//         {
//             if(i%2==0)
//             {
//                 index++;
//                 ans[v[i].first+1]=ans[0]+index;
//             }
//             else
//                 ans[v[i].first+1]=ans[0]-index;
//         }

//         long long int res=0;
//         for(int i=1;i<n+1;i++)
//         res+=2*abs(ans[i]-ans[0])*(v1[i-1]);

//         cout<<res<<endl;
//         for(int i=0;i<n+1;i++)
//         cout<<ans[i]<<" ";
//         cout<<endl;
//     }
//     return EXIT_SUCCESS;
// }

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
typedef long long ll;
typedef long double ld;
#define rep(i, n, k) for (ll i = 0; i < n; i += k)
#define rrep(i, n, k) for (ll i = n; i >= 0; i -= k)
#define rep1(i, n, k) for (ll i = 1; i < n; i += k)
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvs vector<vs>
#define mem(a, b) memset(a, b, sizeof(a))
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb emplace_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define tc(t)    \
    long long t; \
    cin >> t;    \
    while (t--)
#define all(x) (x).begin(), (x).end()

#define dbg(x) cout << #x << " = " << x << endl
#define inf 1e6 + 5
#define mod ll(1e9 + 7)
using namespace std;

template <typename T>
void print_array(const T &arr, char c = ' ')
{
    for (auto x : arr)
    {
        cout << x << c;
    }
    cout << endl;
}

template <typename T>
void input_array(vector<T> &arr)
{
    for (ll i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

vvl adj;
vl vis;
bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first > p2.first;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    ll a, b, c, d, e, f, m, n, p, q;
    string s, r;

    tc(t)
    {
        cin >> n;
        vl ans(n + 1);
        ans[0] = 0;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back({a, i});
        }
        sort(all(v), comp);

        ll steps = 0;
        ll left = 1, right = 1;
        // vl leftvec, rightvec;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2)
            {
                ans[v[i].second + 1] = right;
                steps += (2 * right++) * (v[i].first);
            }
            else
            {
                ans[v[i].second + 1] = -(left);
                steps += (2 * (left++)) * v[i].first;
            }
        }
        cout << steps << endl;
        print_array(ans);
    }
    return 0;
}