#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    scanf("%d", &n);
    int arr[2 * n - 1][2 * n - 1];
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            arr[i][j] = 0;
        }
    }

    // logic 

    for (int j = 0; j < n; j++)
    {

       

        for (int i = j; i < 2 * n - 1 - j; i++)
        {
            arr[i][j] = n - j;
            arr[j][i] = n - j;
            arr[2*n-2-j][i]=n-j;
            arr[i][2*n-2-j]=n-j;
        }
       
        

    }


    // print 
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    printf("\n");

    // Complete the code to print the pattern.

    return 0;
}