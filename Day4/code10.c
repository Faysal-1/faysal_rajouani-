#include <stdio.h>

int main() {
    int n, x, found = 0, pos = -1;

    printf("Entre le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int T[n];
    printf("\nEntre les valeur tableau: \n");
    for (int i = 0; i < n; i++) {
        printf("Entre la valeur %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("\nEntre l'élément à rechercher : ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (T[i] == x) {
            found = 1;
            pos = i;
            break;
        }
    }
    if (found) {
        printf("\ntrouvé à la position %d (indice %d).\n", pos + 1, pos);
    } else {
        printf("\nnon trouvé dans le tableau.\n");
    }

    return 0;
}
