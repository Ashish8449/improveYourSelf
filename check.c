#include<stdio.h>
#include<string.h>
int main()
{
     int n,a;
     int A[10];
     for (int i = 0; i < 1000; i++)
     {
         A[i]=0;
     }
     
    
     printf("Enter 10 element of array:\n");
     for (int i = 0; i < 10; i++)
     {
         scanf("%d", &a);
         A[a]=1;
     }
 
    for (int i = 0; i < 1000; i++)
    {
        if(A[i])
        printf("kdfjdkdfjkdk ");
    }
    printf("\n");
  
  
    

     

return 0;
}