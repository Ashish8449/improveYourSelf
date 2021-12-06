#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        char s[1000];
        gets(s);
        for (int j = 0; j < strlen(s); j++)
        {
            if(j%2==0)
             printf("%c",s[j]);
        }
        printf(" ");
        for (int j = 0; j < strlen(s); j++)
        {
            if(j%2)
             printf("%c",s[j]);
        }
        
        
    }
    
    return 0;
}