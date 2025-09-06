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
    printf("\nEntre le nombre d'élément : \n");
    scanf("%d",&m);
    int T2[m];
    for (int i = 0; i < m; i++){
    printf("Entre la valeur %d:",i);
    scanf("%d",&T2[i]);
    }
    int P = m+n;
    int T3[P];
    for (int i = 0; i < n; i++) {
        T3[i] = T1[i];
    }
    for (int i = 0; i < m; i++) {
        T3[n + i] = T2[i];
    }

    printf("Tableau est ");
        printf("{");
    for (int i = 0; i < P; i++){
       printf(" %d ",T3[i]);
    }
    printf("}");

    return 0;
    
}