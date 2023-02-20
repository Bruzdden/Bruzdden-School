#include <stdio.h>
#include <stdlib.h>

int main() {
int p;
int n;
int j;
int pole[10];
int i;
scanf("%d\n", &j);
if(j > 5)
    printf("Vetsi\n");
else
    printf("Mensi\n");
{
//vypis cisel od jedny do deseti
    ;
    for (i = 0; i < j; i++)
    {
        pole[i] = i + 1;
    }

    for (i = 0; i < j; i++)
    {
        printf("%d ", pole[i]);
}}

;
//vypis random cisel
    {for(p = 0; p < j; p++)
        n = rand() % 100 + 1;
            printf("\n%d ", n);  
}
return 0;
}
