#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                break;
        }
        // i++;
        if ((i + 1) == n)
        {
            cout << "100" << endl;
        }
        else if (i >= m)
        {
            cout << k << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}