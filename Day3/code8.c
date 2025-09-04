#include <stdio.h>

int main(){
    int Moy;
    printf("Entrel la moyenne :\n");
    scanf("%d",&Moy);
    if (Moy < 10)
    {
        printf("\nÉchec");
    }else if (Moy <12 && Moy >= 10)
    {
        printf("\nPassable");
    }else if (Moy <14 && Moy >= 12)
    {
        printf("\nAssez Bien");
    }else if (Moy <16 && Moy >= 14)
    {
        printf("\nBien");
    }else{
        printf("\nTrès Bien");
    }
    return 0;
}