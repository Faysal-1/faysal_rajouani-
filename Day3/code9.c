#include <stdio.h>

int main(){
    char car;
    printf("Entre un caractère est :");
    scanf("%c",&car);
    if (car >='A' && car <= 'Z'){
        printf("c’est une lettre est majuscule");
    }else if (car >= 'a' && car <= 'z')
    {
        printf("c’est une lettre est miniscules");
    }

    return 0;
}