#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11] = {'E','S','P','A','G','U','E','T','E', '\0'}; 
    char vogais[10] = {'A','E','I','O','U','a','e','i','o','u'};
    char substituicao[11] = {0}; 

    for (int i = 0; i < strlen(palavra); i++) {
        substituicao[i] = palavra[i]; 
        for (int j = 0; j < 11; j++) {
            if (palavra[i] == vogais[j]) {
                substituicao[i] = '*'; 
                break; 
            }
        }
    }

    printf("Palavra original: %s\n", palavra);
    printf("Palavra com substituições: %s\n", substituicao);

    return 0;
}
