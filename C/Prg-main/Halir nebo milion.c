#include <stdio.h>

int main() {
    //milion nebo halir
    float halir = 0.01;
    printf("%10.2f\n", halir);
    for(int i = 2;i <= 30;i++)
    {
        halir *= 2;
        printf("%2d. \t %10.2f CZK\n", i, halir);
    }
return 0;
}
