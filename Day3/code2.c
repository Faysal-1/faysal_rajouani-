#include <stdio.h>

int main(){
    char op;
    printf("Entre un caractere :");
    scanf("%c",&op);
    
    switch (op)
    {
    case 'a':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'i':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'u':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'e':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'o':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'A':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'O':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'I':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'U':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    case 'E':
        printf("Le caractère saisi est une voyelle : %c",op);
        break;
    
    default:
        printf("Impossible ");
    }

    return 0;
}
