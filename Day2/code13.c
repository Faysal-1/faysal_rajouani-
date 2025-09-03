#include <stdio.h>

int main(){
    int n,res;
    int Resul[100];
    printf("Entre la valeur Decimal :");
    scanf("%d",&n);

    printf("la valeur par hexadécimale : %x\n",n);
    int i=0;
    int temp =n;
    while(temp != 0)
    {
        res = temp % 2;
        Resul[i] =res;
        i++;
        temp/=2;
    }
    printf("La valeur en binaire : ");
    for (int j = i-1; j >= 0; j--) {
        printf("%d", Resul[j]);
    }
    
}