#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
       int n,q,i,j,count;
       scanf("%d",&n);
       char s[n][1001];
       for(i=0;i<n;i++)
         scanf("%s",&s[i]);
       scanf("%d",&q);
       char Q[q][1001];
       for(j=0;j<q;j++)
         scanf("%s",&Q[j]);
        // for(i=0;i<n;i++)
        //    printf("%s\n",s[i]);
       for(j=0;j<q;j++)
        {   count=0;
            for(i=0;i<n;i++)
            {
                   if(strcmp(s[i],Q[j])==0)
                      count++;
                        // printf("%s\n",s[i]);
                        // printf("%s\n",Q[j]);
                        // printf("%d\n",strcmp(s[i],Q[j]));
                  
            }
            printf("%d\n",count);
              
        }
        
 }