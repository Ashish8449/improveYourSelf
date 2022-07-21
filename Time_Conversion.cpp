#include <bits/stdc++.h>
using namespace std;
// 12:05:45AM => 00:05:45
// 12:00:00PM => 12:00:00
// 07:05:45PM => 19:05:45
// 12:45:54PM => 12:45:54
#define ll long long
int main()
{
    int hh, mm, ss;
    char c1, c2, c;
    cin >> hh >> c >> mm >> c >> ss >> c1 >> c2;
    hh = hh % 12;
    if (c1 == 'P')
    {
        hh = hh + 12;
    }
    cout << setw(2) << setfill('0') << hh << c << setw(2) << setfill('0') << mm << setw(2) << setfill('0')<< c << ss;

    return 0;
}