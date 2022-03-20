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

        int testcase = 0;
        cin >> testcase;
        for (int t = 1; t <= testcase; t++)

        {
            cin >> s;
            ll sum = 0;
            for (int i = 0; i < s.length(); i++)
            {
                sum += (s[i] - '0');
            }
            ll add = sum % 9;
            add = 9-add;
            add%=9;

            bool flg = 0;
            string ans = "";
            for (int i = 0; i < s.length(); i++)
            {
                if(add==0&&i==0){
                    ans+=s[i];
                    continue;

                }
                // dbg(ans);
                if (add < (s[i] - '0' )&& flg == 0)
                {
                    ans += ('0' + add);
                    ans += s[i];
                    flg=1;
                }
                else
                {
                    ans += s[i];
                }
            }
            if (flg == 0)
            {
                ans += ('0' + add);
            }
            cout << "Case #" << t << ": " << ans << endl;
        }
        return 0;
    }