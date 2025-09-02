#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,y1,y2,z1,z2;


    printf("Entre les valeur de points x1,x2:");
    scanf("%d %d",&x1,&x2);
    printf("Entre les valeur de points y1,y2:");
    scanf("%d %d",&y1,&y2);
    printf("Entre les valeur de points z1,z2:");
    scanf("%d %d",&z1,&z2);
    
    double D =sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));

    printf("Resultat est : %.lf",D);
}