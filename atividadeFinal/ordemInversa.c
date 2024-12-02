// Programa 8 (Strings)

// Faça um programa que uma palavra do teclado e imprime as palavra na ordem inversa.
#include <stdio.h>
#include <string.h>

int main(){

    char palavra[6] = {"arroz"}; // 
    int tamanho = strlen(palavra);

    for(int i = tamanho - 1; i >= 0; i--){
        printf(" %c ", palavra[i]);
    }

}