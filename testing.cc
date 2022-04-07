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

using namespace std;

int main()
{

    ll a, b, c, d, e, f, m, n, p, q;
    string s, r;

    // tc(t)
    {
        // n = number , p= power;
        cin >> n >> p;
        int arr[p + 1];
        arr[0] = 1;

        for (int i = 1; i < p + 1; i++)
        {
            arr[i] = 0;
            for (int j = 0; j < n; j++)
            {
                arr[i] += arr[i - 1];
            }
        }
        cout << arr[p] << endl;
    }
    return 0;
}