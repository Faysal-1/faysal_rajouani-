#include <stdio.h>

int main(){
    int n;

    printf("Entre la valeur :");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("Le nombre est pair .");
    }else
        printf("Le nombre est Impair .");

     return 0;   
}