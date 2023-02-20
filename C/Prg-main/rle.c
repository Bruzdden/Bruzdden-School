#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char delka[] = "HELLOOOO";
    char delka2[] = "AAAAABB";
    int len = strlen(delka); /*do len se uloží počet znaku "delka"*/
    int count = 1;
    
    //printf("%s", delka); //toto jsou prikazy na to kdyz nechci urcovat specificky znaky
    //scanf("%s", delka); 
    for(int i = 0; i < len; i++){   /* i < len se da napsat jako i < strlen(delka) a je to lehci nemusi se to ukladat do len*/

        if(delka[i] == delka[i + 1])
{
            count += 1;
}
        else
{
            printf("%c%d-", delka[i], count); // znaky jsou rozdeleny - aby to bylo prehlednejsi da se to odstranit
            count = 1;
}   
}
    printf("\n");
    for(int o = 0; o < strlen(delka2); o++)
{
        if(delka2[o] == delka2[o + 1])
{
            count += 1;
}
        else
{
            printf("%c%d-", delka2[o], count);
            count = 1  ;

}







}
    return(0);
}
