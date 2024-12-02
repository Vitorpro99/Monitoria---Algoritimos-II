#include <stdio.h>

int main(){

    int num = 0;
    int soma = 0;

    printf("Digite um número");
    scanf("%d", &num);
    printf("\n");
    
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            soma = soma + i; // 6
        }
    }
    
    if(soma == num){
        printf("%d é um número perfeito", num);
    }
    else{
        printf("%d não é um número pefeito", num);
    }

}
// Números perfeitos:
// 6
// 28
// 496
// 8128
// Números imperfeitos:
// 5
// 10
// 12
// 27
// 100
// 111
// 250
// 999
// 5000
// 9999