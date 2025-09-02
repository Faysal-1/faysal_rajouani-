#include <stdio.h>


int main(){

    int log,larg;

    printf("Entre longueur :");
    scanf("%d",&log);
    printf("Entre largeur :");
    scanf("%d",&larg);
    

    double Surface =log * larg;
    printf("Resultat est : %lf",Surface);
}