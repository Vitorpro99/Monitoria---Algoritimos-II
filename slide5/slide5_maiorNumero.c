#include <stdio.h>

int maiorNumero(int a, int b);
int main(){
    int num1, num2;
    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    int maior = maiorNumero(num1, num2);
    printf("O maior numero é %d ", maior);
}
int maiorNumero(int a, int b){
    if(a > b){
        return a;
        //printf("O maior numero é %d ", a);
    }
    if(b < a){
        return b;
        //printf("O maior numero é %d ", b);
    }
}