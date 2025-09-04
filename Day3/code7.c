#include <stdio.h>

int main(){
    char lettre;

    printf("Entre un Caractere :");
    scanf("%c",&lettre);

    for (int i = 'A'; i < 'Z'; i++)
    {
        if(lettre == i)
        printf("Le resulre  le caractère est une lettre majuscule est %c",lettre);
        else
        printf("le caractère n'est pas une lettre majuscule");
    }
    return 0;
    
}