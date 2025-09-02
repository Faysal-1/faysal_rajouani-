#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;

    printf("Entre les trois valeur :");
    scanf("%d %d %d",&a,&b,&c);

    double M = pow(a+b+c,1.0/3.0);// M=sbrt(a+b+c);
    printf("Resultat : %.2f",M);
}