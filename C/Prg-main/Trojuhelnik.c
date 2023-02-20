#include <stdio.h>

int main(void) {
    
    int i, j;
    int h;
    scanf("%d", &h);
    
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= h - i; j++) 
            printf("  ");
        for (j = 2; j <= i * 2; j++)    
            printf("*");
        printf("\n");
    }
   
    return 0;
}
