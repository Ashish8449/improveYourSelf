#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	while (tc--)
	{

		int n;
		cin >> n;
		for (int i = pow(10, n - 1); i < pow(10, n); i++)
		{
			if (i % 2 == 1 && i % 3 == 0 && i % 9 != 0)
			{
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}