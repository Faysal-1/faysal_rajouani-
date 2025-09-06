#include <stdio.h>
#include <stdlib.h>

char bord[3][3];
 char X;

void initiale() {
    int count = 1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            bord[i][j] = count++ + '0';
        }
        
    }
    
}

void play(){
    printf("\nTic Tac Toe\n\n");
    printf(" %c  | %c  | %c \n",bord[0][0],bord[0][1],bord[0][2]);
    printf("----|----|----\n");
    printf(" %c  | %c  | %c \n",bord[1][0],bord[1][1],bord[1][2]);
    printf("----|----|----\n");
    printf(" %c  | %c  | %c \n",bord[2][0],bord[2][1],bord[2][2]);
    printf("----|----|----\n\n");
    Resultat();
}


int put_X_O(char ch, int pos) {
    int row = (pos-1)/3;
    int col = (pos-1)%3;
    if(bord[row][col] != 'X' && bord[row][col] != 'O') {
        bord[row][col] = ch;
        return 1;
    }
    return 0;
}
int Resultat(){
    for (int i = 0; i < 3; i++){
        if (bord[i][0]==bord[i][1]&& bord[i][1]==bord[i][2]){
            return 1;
        }
        if (bord[0][i]==bord[1][i]&& bord[1][i]==bord[2][i]){
            return 1;
        }
    }
        if (bord[0][0]==bord[1][1]&& bord[1][1]==bord[2][2]){
            return 1;
        }
        if (bord[0][2]==bord[1][1]&& bord[1][1]==bord[2][0]){
            return 1;
        }    
}
void choix(){    
    int n;
    printf("Entre X ou O : ");
    scanf(" %c", &X);
    printf("Joueur %c, entrez la position (1-9): ",X);
    scanf("%d", &n);
    put_X_O(X,n);
    
}

int main(){
    int n,count=0;
    do
    {
        printf("Tic Tac Toe - Menu\n");
        printf("1. Jouer\n");
        printf("2. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d",&n);
        if(n==1){
            initiale();
            play();
            int count = 0;
            while(count < 9){  
                choix();
                play(); 
                if(Resultat()){   
                    printf("🎉 Joueur %c a gagné !\n", X);
                    break;
                }
                if(count == 9 && !Resultat()){
                printf("Match nul !\n");
                }
                count++;
            }
            printf("Le jeu est terminé!\n");
        }
        
    } while (n != 2);

    return 0;
    
}
