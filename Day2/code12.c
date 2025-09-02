#include <stdio.h>

int main(){
    int n;
    int r = 0;
    printf("Entre rayon :");
    scanf("%d",&n);
    while(n != 0){
    int d = n % 10;
     r = r * 10 + d ;
    n /= 10;

    }
    
    printf("Resulat est :%d",r);
    
}