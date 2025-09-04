#include <stdio.h>

int main(){
    int n;
    printf("Entre  un nombre :");
    scanf("%d",&n);
    
    if (n > 0)
    {
        printf("le Nombre est Positif ");
    }else if (n < 0)
    {
        printf("le Nombre est Negatif ");
    }else
    {
        printf("Le Nombre est Null ");
    }
    
    return 0;
}