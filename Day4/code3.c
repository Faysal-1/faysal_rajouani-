#include <stdio.h>

int main(){
    int n,Som=0;
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < n; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T[i]);
    Som += T[i];
    }
    printf("\nLa Somme est : %d  \n",Som);
    return 0;
}