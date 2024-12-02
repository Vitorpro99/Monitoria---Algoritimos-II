#include <stdio.h>

int main(){
    int num;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d",&num);
    
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            soma += i;// soma = soma + i
        }
    }
    printf("\n");
    if(soma == num){
        printf("%d e um número perfeito", num);
    }
    else{
        printf("%d não e perfeito", num);
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