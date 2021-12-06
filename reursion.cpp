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
vi v(5);
ll m, n;
ll sum;
ll cnt = 0;
int count(int indx, ll sum_subset = 0)
{
    if (indx == v.size())
    {
        return sum == sum_subset;
    }

    return count(indx + 1, sum_subset + v[indx]) + count(indx + 1, sum_subset);
}

int countways(int i, int j, vvl &v)
{
    if (i >= n || j >= m || !v[i][j])
        return 0;
    cout << i << " ->" << j << endl;
    if (i == n - 1 && j == m - 1)
        return 1;
    return countways(i + 1, j, v) + countways(i, j + 1, v);
}
// void permutation(string s)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    fast;
  
    //  cout<<double(ld(0.1)+ld(0.2))<<endl;
    // if((0.1+0.2)==0.3)cout<<"Yes"<<endl;
    // else cout<<"No"<<endl;
  cout<<(29&412)<<endl;

    return 0;
}
