#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[10][1000];
    int t,i=0,a;
    scanf("%d", &t); //кол-во строчек
    printf("%d\n", t);
    
    for (i=0; i<t; i++)
    {
            scanf("%s", s[i]);
            printf("%s\n", s[i]);
    }
    
   for (i=0; i<t; i++)
   {
    a=strlen(s[i]);
    
   }

    return 0;
}
