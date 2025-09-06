#include <stdio.h>

int main(){
    int n;
    int annee;
    do
    {
        printf("Menu interactif pour convertir une année :\n");

        printf("1 = Convertisseur Mois \n");
        printf("2 = Convertisseur Jours \n");
        printf("3 = Convertisseur Heures \n");
        printf("4 = Convertisseur Minutes \n");
        printf("5 = Convertisseur Secondes \n");
        printf("6 = Quiter \n");

        printf("Entre a Quelle convertisseur :\n");
        scanf("%d",&n);
        printf("Entre Annee :\n");
        scanf("%d",&annee);

        switch (n)
    {
        case 1:printf("Convertisseur sur Mois : %d\n" ,annee*12);break;
        case 2:printf("Convertisseur sur Jours : %d\n" ,annee*365);break;
        case 3:printf("Convertisseur sur Heures : %d\n" ,annee*365 * 24);break;
        case 4:printf("Convertisseur sur Minutes : %d\n" ,annee*365 * 24 * 60);break;
        case 5:printf("Convertisseur sur Secondes : %d\n" ,annee*365 * 24 * 60* 60);break;
        default:printf("Choix invalide, reessaye.\n");
    }
    } while (n !=6);

}