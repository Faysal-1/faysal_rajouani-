#include <stdio.h>

#define n 0.27778
int main(){
    int c;
    printf("saisie une vitesse de km/h:");
    scanf("%d",&c);
    float M =c + n;

    printf("Resultat m/s: %.2f",M);
 return 0;
}