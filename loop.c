#include <stdio.h>

int main(){
    int num = 0;
    int maior;
    int menor;
    int soma = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o %d° numero: ",i + 1);
        scanf("%d", &num);
    if(i == 0){
        menor = num;
        maior = num;
    }
        if(num < menor){
            menor = num;
        }
        if(num > maior){
            maior = num;
        }
    soma += num;
}
    float resultado = (soma / 10.0);
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\n Media dos numeros: %f", resultado);

    return 0;
}