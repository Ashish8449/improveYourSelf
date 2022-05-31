#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    vector<int> v(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        if (v[s[i] - 'a'] == 0)
            v[s[i] - 'a'] = i + 1;
        else
            v[s[i] - 'a'] = -1;
    }
    int ans = INT32_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] && v[i] != -1)
            return ans = min(ans, v[i]-1);
    }
    if (ans == INT32_MAX)
        return -1;
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<firstUniqChar(s);

}