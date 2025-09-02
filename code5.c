#include <stdio.h>

int main(){
    int T ;
    printf("saisie une vitesse de km/h:");
    scanf("%d",&T);

    if(T < 0){
        printf("Solide");
    }else if(T < 100 && T > 0)
        printf("Solide");
    else if(T > 100)
        printf("Solide");
 
        return 0;
}