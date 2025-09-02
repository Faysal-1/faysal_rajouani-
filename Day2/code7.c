#include <stdio.h>

int main(){
    int a,b,c;

    printf("Entre les trois valeur :");
    scanf("%d %d %d",&a,&b,&c);
    float M =(a*2 + b*3 + c*5)/ (2+3+5);
    printf("Resultat : %.2f",M);
}