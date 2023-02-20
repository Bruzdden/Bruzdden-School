#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sifra[] = "dobry"; 
    int cesar = 1;

    for(int i; sifra[i] != '\0'; i++){
        sifra[i] = sifra[i] + cesar;}
    
    printf("zprava: %s\n", sifra);
   
    
     return(0);
}
