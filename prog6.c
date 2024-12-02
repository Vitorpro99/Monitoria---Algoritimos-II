#include <stdio.h>

int main(){
    int n1, n2, n3;
    int maior = 0, menor = 0;
    printf("\nInforme o valor: ");
    scanf("%d",&n1);
    printf("\nInforme o valor: ");
    scanf("%d",&n2);
    printf("\nInforme o valor: ");
    scanf("%d",&n3);

    //Teste maior numero
    if(n1 > n2 && n1 > n3){
        maior = n1;
    }
    else if(n2 > n1 && n2 > n3){
        maior = n2;
    }
    else
        maior = n3;

    //Teste menor numero
    if(n1 < n2 && n1 < n3){
        menor = n1;
    }
        else if(n2 < n1 && n2 < n3){
        menor = n2;
    }
    else
        menor = n3;

    printf("Maior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
}
