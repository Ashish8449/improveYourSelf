#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
    set<int> s1, s2;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s1.emplace(x);
        }
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            s2.emplace(y);
        }

       

        set<int>::iterator s4 = s2.begin();

        for (set<int>::iterator s3 = s1.begin(); s3 != s1.end() && s4 != s2.end(); s3++, s4++)
        {
            cout << *s3 << " " << *s4 << " ";
        }
        cout<<endl;
    }

    return 0;
}