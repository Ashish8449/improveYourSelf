#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif


    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int i;
        int c = 0;

        for (i = 1; i <= n; i++)
        {

            if (n % i == 0)
                c++;
        }
        if (c > 2 || n == 1)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}