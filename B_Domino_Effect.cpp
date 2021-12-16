#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == 'R')
                {
                    if ((i - j) % 2 == 0)
                        s[j + (i - j) / 2] = '.';
                    break;
                }
                else
                    s[j] = 'D';
            }
        }
        else if (s[i] == 'R')
        {

            int j;
            // cout<<i<<"##"<<j<<endl;
            for (j = i + 1; j < n; j++)
            {
                // cout<<j<<"**"<<endl;
                if (s[j] == 'L')
                {
                    if ((j - i) % 2 == 0)
                        s[i + (j - i) / 2] = '.';
                    break;
                }
                else if (s[j] == '.')
                {

                    s[j] = 'D';
                    // cout<<"yes\n"<<endl;
                }
                //   cout<<j<<s[j]<<endl;
            }
            i = j;
        }
    }
    int count = 0;
    for (char x : s)
        if (x == '.')
            count++;

    cout << count << endl;
    // cout<<s<<s.length();
    return 0;
    //-static-libgcc
}