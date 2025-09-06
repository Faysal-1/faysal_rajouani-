#include <stdio.h>

int main(){
    int n,Min;
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < n; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T[i]);
    }
    Min = T[0];
    for (int i = 1; i < n; i++){
        if (Min > T[i]){
            Min = T[i];
        }
    }
    printf("\nLe Minimum est : %d  \n",Min);
}