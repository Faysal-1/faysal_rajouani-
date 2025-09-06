#include <stdio.h>

int main(){
    int n,temp=0;
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < n; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
             }
        }
    }
    printf("Tableau Tri par Ordre Croissant est ");
        printf("{");
    for (int i = 0; i < n; i++){
       printf(" %d ",T[i]);
    }
    printf("}");
}