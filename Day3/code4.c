#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    double x1,x2;
    printf("Entre la valeur A :");
    scanf("%d",&a);
    printf("Entre la valeur B :");
    scanf("%d",&b);
    printf("Entre la valeur B :");
    scanf("%d",&c);
    if(a==0){
        if (b==0){  
            if(c==0){
                printf("Impossible");
            }else{
                printf("Impossile que Int = 0");
            }
        }else{
            printf(" Resultat est %.lf",-c/b);
        }
    }else{
    int delta = b*b - 4*a*c;

        if(delta > 0){
            printf("Deux solutions réelles distincte");
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
        }else if (delta == 0)
        {
            printf("Une solution double");
            x1 = -b /(2*a);
        }else{
            printf("Pas de solution réelle");
        }

    }
    return 0;
}