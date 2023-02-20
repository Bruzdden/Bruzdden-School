#include <stdio.h>
#include <stdlib.h>

int Zvirata(int hlavy, int nohy){  
    int kravy = 0, slepice = 0;
    slepice = (nohy - (2 * hlavy)) / 2;
    kravy = (nohy - (4 * slepice)) / 2;
    int PN = (slepice * 2) + (kravy * 4); int p = PN == nohy;
    if (!p)
    printf("\nnení možné, zadejte jiné čísla");
    else{
        if (kravy < 0 || slepice < 0)
        {printf("\nNení možné, zadejte jiné čísla");}
        else
        {printf("\nSlepice: %d, Kravy: %d", kravy, slepice);} }}
int main(void){
    int h, n;
    printf("Enter number of heads: ");
    scanf("%d", &h);
    printf("%d" , h);
    printf("\nEnter number of legs: ");
    scanf("%d", &n);
    printf("%d", n);

    Zvirata(h, n);}

//27
