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
#define nline "\n"
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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    ll c, d, e, f, m, n, p, q;
    string s, r;

    tc(t)
    {
        cin >> n;
        vl a(n), b(n);
        vvi va(n, vi(32, 0)), vb(n, vi(32, 0));
        input_array(a);
        input_array(b);
        for (ll i = 0; i < n; i++)
        {
            ll z = a[i];
            ll k = 0;
            while (z)
            {
                if (z & 1)
                {
                    va[i][k] = 1;
                }
                k++;
                z = z >> 1;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            ll z = b[i];
            ll k = 0;
            while (z)
            {
                if (z & 1)
                {
                    vb[i][k] = 1;
                }
                k++;
                z = z >> 1;
            }
        }
        //  for (ll i = 0; i < n; i++)
        //  {
        //      print_array(va[i]);
        //  }
        //    for (ll i = 0; i < n; i++)
        //  {
        //      print_array(vb[i]);
        //  }
        vi flip(n, 0);
        vi sure(n, 1);
        vi count_ans(32, 0);

        for (int j = 32 - 1; j >= 0; j--)
        {

            vi index;
            bool flg = 1;
            ll bitfront, bit_back;
            for (ll i = 0; i < n; i++)
            {

                if (flip[i])
                {
                    bitfront = vb[i][j];
                    bit_back = va[i][j];
                }
                else
                {
                    bit_back = vb[i][j];
                    bitfront = va[i][j];
                }

                if (bit_back == bitfront && bitfront == 0)
                {
                    flg = 0;
                    break;
                }
                else
                {
                    index.pb(i);
                }
            }
            if (flg)
            {
                bool chk = 1;
                for (ll in = 0; in < index.size(); in++)
                {
                     if (flip[index[in]])
                        {
                            bitfront = vb[index[in]][j];
                            bit_back = va[index[in]][j];
                        }
                        else
                        {
                            bit_back = vb[index[in]][j];
                            bitfront = va[index[in]][j];
                        }
                    if (bit_back==1&&bitfront==0 && sure[index[in]]==0)
                    {
                        chk = 0;
                        break;
                    }
                }

                if (chk)
                {
                    for (ll in = 0; in < index.size(); in++)
                    {
                        if (flip[index[in]])
                        {
                            bitfront = vb[index[in]][j];
                            bit_back = va[index[in]][j];
                        }
                        else
                        {
                            bit_back = vb[index[in]][j];
                            bitfront = va[index[in]][j];
                        }
                        if(bitfront&&bit_back){
                            
                        }
                        else if(bitfront==1&&bit_back==0){
                            sure[index[in]]=0;
                        }else{
                            sure[index[in]]=0;
                            flip[index[in]]=!flip[index[in]];
                        }
                      
                       
                    }
        //             dbg("flip");
        //              print_array(flip);
        //              dbg("sure");
        //  print_array(sure);
                }
            }
        }
       
        ll ans = a[0];
        ll countflip = 0;
        if (flip[0])
            ans = b[0], countflip++;
        for (ll i = 1; i < n; i++)
        {
            if (flip[i])
            {
                ans &= b[i];
                countflip++;
            }
            else
            {
                ans &= a[i];
            }
        }
        cout << ans << " " << countflip << endl;
    }
    return 0;
}