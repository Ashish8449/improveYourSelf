
#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m], ans[n + m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
            ans[k] = arr1[i++];
        else
            ans[k] = arr2[j++];
        k++;
  
    }
    while(i<n)  ans[k++] = arr1[i++];
    while(j<m)  ans[k++] = arr2[j++];
    for (int i = 0; i < n+m; i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}