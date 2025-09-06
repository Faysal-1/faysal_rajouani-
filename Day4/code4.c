#include <stdio.h>

int main(){
    int n,Max;
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < n; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T[i]);
    }
    Max = T[0];
    for (int i = 1; i < n; i++){
        if (Max < T[i]){
            Max = T[i];
        }
    }
    printf("\nLe Maximum est : %d  \n",Max);
}