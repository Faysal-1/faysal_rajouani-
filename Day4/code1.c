#include <stdio.h>

int main(){
    int T[5] = {1,2,3,4,5};
      printf("Tableau est ");
        printf("{");
    for (int i = 0; i < 5; i++){
       printf(" %d ",T[i]);
    }
    printf("}");
    
}