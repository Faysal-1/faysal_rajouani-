#include <stdio.h>

int main(){
    int a,b,Som=0;

    printf("Entre la valeur A:");
    scanf("%d",&a);
    printf("Entre la valeur B:");
    scanf("%d",&b);

    if(a==b){
        Som = (a+b)*3;
    }else{
        Som = a+b;
    }
    printf(" Resultat :%d",Som);

    return 0;
}