#include <stdio.h>

int main(){
    int n,m;
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&n);
    int T1[n];
    for (int i = 0; i < n; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T1[i]);
    }

    printf("Tableau est ");
        printf("{");
    for (int i = n-1; i >= 0; i--){
       printf(" %d ",T1[i]);
    }
    printf("}");

    return 0;
    
}