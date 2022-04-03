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
void remove(string &curr)
{
    // cout << "u" << endl;
    int indx = 0;
    for (int i = 0; i < curr.size() - 1; i++)
    {
        if (curr[i] == '/')
        {
            indx = i;
        }
    }

    curr = curr.substr(0, indx + 1);
    //    dbg(curr);
}
void add(string &curr, string add)
{
    // dbg("add");
    // dbg(add);
    curr += add;
    curr += "/";
    // dbg(curr);
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

    string curr = "/";
    tc(t)
    {

        cin >> s;
        if (s == "pwd")
        {
            cout << curr << endl;
        }
        else
        {
            cin >> r;
            string z = "";
            int indx = 0;
            if (r[0] == '/')
            {
                string tem = "";

                for (int i = 0; i < r.size(); i++)
                {
                    if (r[i] == '/' || r[i] == '.')
                    {
                        curr += tem;
                        if (tem != "")
                        {
                            indx = i;
                            curr += '/';
                            break;
                        }
                    }
                    else
                    {
                        tem += r[i];
                    }
                }
            }

            for (int i = indx; i < r.size(); i++)
            {
                if (r[i] == '/')
                {
                    // dbg(z);
                    if (z != "")
                    {
                        // dbg
                        add(curr, z);
                        // dbg(curr);
                    }
                    // dbg(curr);
                    z = "";
                }
                else if (r[i] == '.' && r[i + 1] == '.')
                {
                    // cout<<"u"<< endl;
                    remove(curr);
                    i++;
                }
                else
                {
                    z += r[i];
                }
            }
            if (z != "")
            {
                add(curr, z);
            }
        }
    }
    return 0;
}
