#include <stdio.h>
#include <string.h>


// Exercicio 1
int main(){
    char nomeCompleto[20];
    int tam;
    printf("Digite seu nome completo: ");
    scanf("%s", nomeCompleto);
    tam = strlen(nomeCompleto);

    printf("Seu nome completo é: %s\n", nomeCompleto);
    printf("O nome possui %d caracteres.\n", tam);


    
}