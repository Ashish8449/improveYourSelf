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
//     vl seive(200 + 5, 1);
//     vl prime;
//     seive[1] = 0, seive[0] = 0;
//     for (ll i = 2; i * i <= 200 + 5; i++)
//     {
//         if (seive[i] == 1)
//             for (ll j = i * i; j <= 200 ; j += i)
//             {
//                 seive[j] = 0;
//             }
//     }
//     for (ll i = 0; i < seive.size(); i++)
//     {
//         if (seive[i])
//             prime.pb(i);
//     }
//     vl value;
//     for (ll i = 0; i < prime.size(); i++)
//     {
//         for (ll j = i+1; j < prime.size(); j++)
//         {
//             if(prime[i]*prime[j]<=200)value.pb( prime[i]*prime[j]);
//             else break;
//         }

//     }

//     tc(t)
//     {

//         cin >> n;
//         bool flg=0;
//         for (ll i = 0; i < value.size(); i++)
//         {
//             for (ll j = 0; j < value.size(); j++)
//             {
//                 if(value[i]+value[j]==n)flg=1;
//             }

//         }

//         (flg?cout<<"YES":cout<<"NO");
//         cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int z;
template <typename T>
void print_array(const T &arr, char c = ' ')
{
    z = 0;
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
    vector<int> v(201, 1);
    v[0] = 0;
    v[1] = 0;
    for (int i = 2; i * i < 201; i++)
        if (v[i] == 1)
        {
            {
                // cout << i * i << endl;
                for (int j = i * i; j <= 201; j += i)
                {
                    // cout << i << " " << j << endl;
                    v[j] = 0;
                    
                }
            }
            // print_array(v);
            // i++;
        }

    vector<int> prime;
    for (int i = 0; i <= 201; i++)
    {
        if (v[i])
            prime.push_back(i);
    }
    // print_array(prime);
    vector<int> sump;
    for (int i = 0; i < prime.size(); i++)
    {
        for (int j = i + 1; j < prime.size(); j++)
        {
            if ((prime[i] * prime[j]) < 201)
                sump.push_back(prime[i] * prime[j]);
            else
                break;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int res = 0;
        for (int i = 0; i < sump.size(); i++)
        {
            for (int j = 0; j < sump.size(); j++)
            {
                if (sump[i] + sump[j] == n)
                {
                    res = 1;
                    // cout << sump[i] << "  " << sump[j] << endl;
                }
            }
        }
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return EXIT_SUCCESS;
}