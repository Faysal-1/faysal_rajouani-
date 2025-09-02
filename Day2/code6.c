#include <stdio.h>

int main(){
    int a,b;
    char op;

    printf("Entre la valeur 1 :");
    scanf("%d",&a);
    printf("Entre la valeur 2 :");
    scanf("%d",&b);
    printf("Entre opration");
    scanf(" %c",&op);
    

    switch (op)
    {
    case '+':
        printf("Addition %d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("Soustraction %d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("Multiplication %d * %d = %d",a,b,a*b);
        break;
    case '/':
        if (b !=0)
        {
          printf("Division %d + %d = %d",a,b,a/b);
        }else {
            printf("Impossible !");
        }
        break;
    
    default:
        printf("Impossible");
    }
}