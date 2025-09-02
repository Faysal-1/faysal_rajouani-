#include <stdio.h>

int main(){
    char nom[50],prenom[50],sexe[50],email[50];
    int age;
    
    printf("Entre le nom :");
    scanf("%s",nom);
     printf("Entre le Prenom :");
    scanf("%s",prenom);
     printf("Entre le sexe :");
    scanf("%s",sexe);
     printf("Entre le email :");
    scanf("%s",email);
     printf("Entre le age :");
    scanf("%d",&age);

    printf("Nom : %s | ",nom);
    printf("Nom : %s | ",prenom);
    printf("Nom : %s | ",email);
    printf("Nom : %d | ",age);
    printf("Nom : %s | ",sexe);
    
     return 0;
}