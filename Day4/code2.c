#include <stdio.h>

int main(){
    int n;
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < 5; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T[i]);
    }
    printf("Tableau est ");
        printf("{");
    for (int i = 0; i < 5; i++){
       printf(" %d ",T[i]);
    }
    printf("}");

    return 0;
}