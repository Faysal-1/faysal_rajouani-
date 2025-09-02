#include <stdio.h>
#define n 273.15
int main(){
    int c;
    printf("saisie en degrés Celsius :");
    scanf("%d",&c);
    float M =c + n;

    printf("Resultat : %.2f",M);

     return 0;
}