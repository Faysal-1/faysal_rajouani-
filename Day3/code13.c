#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x, y;

    printf("Entrez les coordonnées de la première : ");
    scanf("%f %f", &x1, &y1);

    printf("Entrez les coordonnées de la deuxième : ");
    scanf("%f %f", &x2, &y2);

    printf("Entrez les coordonnées Test : ");
    scanf("%f %f", &x, &y);

    float crs = (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);

    if (crs == 0 && 
        (x >= (x1 < x2 ? x1 : x2) && x <= (x1 > x2 ? x1 : x2)) && 
        (y >= (y1 < y2 ? y1 : y2) && y <= (y1 > y2 ? y1 : y2))) {
        
        printf("(%.2f, %.2f) est sur le segment.\n", x, y);
    } 
    else {
        printf("(%.2f, %.2f) n'est pas sur le segment.\n", x, y);
    }

    return 0;
}
