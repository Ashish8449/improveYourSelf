#include<stdio.h>
#include<string.h>
int main()
{
     int a, b;
     float c, d;
     scanf("%d %d" ,&a,&b);
     scanf("%f %f",&c,&d);
     int sum_int=a+b, dif_int=a-b;
     float sum_float=c+d, dif_float=c-d;
     printf("%d %d \n%.1f %.1f",sum_int ,dif_int, sum_float,dif_float);

     

return 0;
}