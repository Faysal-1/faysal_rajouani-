#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
    int r;
    printf("Entre rayon :");
    scanf("%d",&r);
    double V =(4/3) * PI *(pow(r,3));

    printf("Resultat : %lf",V);
}