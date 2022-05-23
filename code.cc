#include <iostream>
using namespace std;

int func(int i, int n, int arr[])
{
    int ans = 0;
    if (i >= arr[i])
    {

        if (n - i - 1 >= arr[i] - 1)
        {
            ans += arr[i];
        }
        else
        {
            // ans+=((arr[i]-1) - (n-i-1));
            ans += n - i;
        }
    }

    else
    {
        if (n - i - 1 >= arr[i] - 1)
        {
            ans += i + 1;
        }
        else
        {
            if (n < arr[i])
            {
                ans += 0;
            }
            else
            {
                ans += (n - arr[i] + 1);
            }
        }
    }

    return ans;
}

int main()
{
    // your code goes here

    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int check[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            check[arr[i]] = -1;
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {

            if (check[arr[i]] < 0)
            {
                ans += func(i, n, arr);
                check[arr[i]] = i;
            }
            else
            {
                int j = check[arr[i]];
                if (i - j - 1 >= arr[i] - 1)
                {
                    ans += func(i, n, arr);
                }
                else
                {
                    if (n >= i + arr[i]-1)
                    {
                        ans += (i - j-1);
                    }
                    else
                    {
                        ans += 0;
                    }
                }

                check[arr[i]] = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
