#include <stdio.h>

int main(){
    int n,Fact=1;
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < n; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T[i]);
    }
    for (int i = 1; i < n; i++){
        Fact *= T[i];
    }
    printf("\nLe facteur de multiplication est : %d  \n",Fact);
}