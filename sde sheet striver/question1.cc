// Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

// Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

// Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

// Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0

#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    set<int> col, row;
    int n, m;

    cin >> n >> m;
  
    vector<vector<int>> v(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (!v[i][j])
            {
                row.insert(i);
                col.insert(j);
            }
        }
    }
    for (auto &&i : row)
    {
        for (int j = 0; j < m; j++)
        {
            v[i][j] = 0;
        }
    }
    for (auto &&i : col)
    {
        for (int j = 0; j < n; j++)
        {
            v[j][i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}
