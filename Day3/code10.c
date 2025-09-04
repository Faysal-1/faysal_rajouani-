#include <stdio.h>

int main(){
    int JJ,MM,AAAA;
    char *Mois[] = {"janvier", "février", "mars", "avril", "mai", "juin","juillet", "août", "septembre", "octobre", "novembre", "décembre"};
    printf("Entre la date du format JJ/MM/AAAA :");
    scanf("%d %d %d",&JJ,&MM,&AAAA);
    
    if (MM >= 1 || MM <= 12){
    printf("Resultat par JJ-Mois-AAAA : %d-%s-%d \n",JJ,Mois[MM -1],AAAA);
    }else{
        printf("Erreur");
    }
    

    return 0;
}