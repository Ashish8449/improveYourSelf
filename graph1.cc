#include <iostream>
using namespace std;

int main()
{
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    // n is the number of vertices
    // m is the number of edges
    int n, m;
    cin >> n >> m;
    int adjMat[n + 1][n + 1];
   
       for (int i = 0; i < n + 1; i++)
    {
        /* code */
        for (int j = 0; j < n + 1; j++)
        {
           adjMat[i][j] =0;
        }
       
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < n + 1; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
