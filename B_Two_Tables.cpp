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
// typedef long long ll;
// typedef long double ld;
// #define rep(i, n, k) for (ll i = 0; i < n; i += k)
// #define rrep(i, n, k) for (ll i = n; i >= 0; i -= k)
// #define rep1(i, n, k) for (ll i = 1; i < n; i += k)
// #define vi vector<int>
// #define vl vector<ll>
// #define vs vector<string>
// #define vvi vector<vi>
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// #define pb push_back
// #define mp make_pair
// #define fi first
// #define se second
// #define tc(t)    \
//     long long t; \
//     cin >> t;    \
//     while (t--)
// #define all(x) (x).begin(), (x).end()
// #define dbg(x) cout << #x << " = " << x << endl
// #define inf 1e6 + 5
// #define mod ll(1e9 + 7)
// using namespace std;

// template <typename T>
// void print_array(const T &arr, char c = ' ')
// {
//     for (auto x : arr)
//     {
//         cout << x << c;
//     }
//     cout << endl;
// }

// template <typename T>
// void input_array(vector<T> &arr)
// {
//     for (ll i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//     }
// }

// ld distance(ll x1, ld y1, ld x2, ld y2)
// {
//     ld ans = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//     return ans;
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
//     freopen("output.txt", "w", stdout);
// #endif
//     fast;
//     ll a, b, c, d, e, f, m, n, p, q;
//     string s, r;

//     tc(t)
//     {
//         ld W, H, x1, y1, x2, y2, w, h;
//         cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
//         ld ans = double(INT64_MAX), dis = double(INT64_MAX);

//         // 0.0
//         if (x1 >= w && y1 <= H)
//             dis = 0;

//         if (y1 <= h && x1 <= W)
//             dis = 0;
//         ans = min(ans, dis);
//         if (x1 < w && y1 < h)
//         {

//             if (y2 + (h - y1) <= H)
//             {
//                 dis = h - y1;
//                 ans = min(ans, dis);
//             }

//             if (x2 + (w - x1) <= W)
//             {
//                 dis = w - x1;
//                 ans = min(ans, dis);
//             }
//             // if( y2+(h-y1)<=H&&x2+(w-x1)<=W){
//             //     dis =sqrt(pow(w-x1,2)+pow(h-y1,2 ));
//             //     ans =min(ans, dis );
//             // }
//         }
//         dbg(ans);
//         //  dbg(ans);
//         //  dbg(ans);

//         // 0, H
//         if (w <= x1 && h <= H)
//             dis = 0;
//         if (h <= (H - y2) && w <= W)
//             dis = 0;
//         if (w > x1 && h > (H - y2))
//         {

//             if (x2 + (w - x1) <= W)
//             {
//                 dis = w - x1;
//                 ans = min(ans, dis);
//             }
//             if (y1 - (y2 - h) >= 0)
//             {
//                 dis = y2 - h;
//                 ans = min(ans, dis);
//             }
//             //  if(x2+(w-x1)<+w&&y1-((y2-h)>=0)){
//             //      dis =sqrt(pow( w-x1,2)+pow(y2-h,2));
//             //      ans=min(ans, dis);
//             //  }
//         }
//         dbg(ans);
//         //W,0
//         if (h <= y1 && w <= W)
//             dis = 0;
//         if (w <= (W - x2) && h <= H)
//             dis = 0;
//         ans = min(ans, dis);

//         if (w > (W - x2) && (h > y1))
//         {
//             if (x1 - (w - (W - x2)) >= 0)
//             {
//                 dis = w - (W - x2);
//                 ans = min(ans, dis);
//             }
//             //    dbg(ans);
//             if (y2 + (h - y1) <= H)
//             {
//                 dis = h - y1;
//                 ans = min(ans, dis);
//             }
//             //  if(x1-(w-(W-x2))>=0&&y2+(h-y1)<=h){
//             //      dis = sqrt(pow(h-y1,2 )+pow(w-(W-x2), 2));
//             //      ans =min(ans, dis);
//             //  }
//         }
//         //    dbg(ans);
//         dbg(ans);
//         // W , H

//         if (W - w >= x2 && h <= H)
//             dis = 0;
//         if (H - h >= y2 && w <= W)
//             dis = 0;
//         ans = min(ans, dis);

//         if (W - w < x2 && H - h < y2)
//         {

//             if (x1 - ((W - w) - (W - x2)) >= 0)
//             {

//                 dis = W - w - (W - x2);
//                 ans = min(ans, dis);
//             }
//             dbg(ans);
//             if (y1 - (h - (H - y2)) >= 0)
//             {
//                 cout << "*" << endl;
//                 dis = h - (H - y2);
//                 ans = min(ans, dis);
//             }
//             dbg(ans);
//             //  if(x1-(W-w-x2)>=0&&(y1-(H-h-y2))>=0){
//             //       dis =sqrt(pow(H-h-y2, 2)+pow(W-w-x2, 2));
//             //       ans =min(ans, dis);
//             //  }
//             dbg(ans);
//         }
//         dbg(ans);

//         if (ans == double(INT64_MAX))
//         {
//             cout << -1 << endl;
//         }
//         else
//             cout << fixed << setprecision(8) << ans << endl;
//     }
//     return 0;
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
      ll W, H, x1, y1, x2, y2, w, h;
        cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
      ll left =W-x2;
      ll right =x1;
      ll up=H-y2;
      ll down=y1;
    //   dbg(up);
    //   dbg(down);
    //   dbg(left);
    //   dbg(right);
      if(up +down<h&&right+left<w){
          cout<<-1<<endl;
      }
      else if(up>=h||down>=h||left>=w||right>=w){
          cout<<0<<endl;

      }
      else {
        //   dbg("#");
        ll ansv=INT32_MAX,ansh=INT32_MAX;
        if(up+down>=h){
            ansv=h-max(up, down);
        }
        if(left+right>=w){
            ansh=w-max(left, right);
        }
         cout<<min(ansv, ansh)<<endl;


      }
}
return 0;
}