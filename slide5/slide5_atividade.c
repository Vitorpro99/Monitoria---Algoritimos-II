#include <stdio.h>

// Declaração das funções
void diferenca(int x[], int y[]);
void inteserccao(int x[], int y[]);
void uniao(int x[], int y[]);

int main() {
    // Declaração e inicialização dos vetores x e y
    int x[5] = {1, 3, 5, 7, 9}; // Conjunto x
    int y[5] = {1, 2, 3, 4, 5}; // Conjunto y

    // Chama as funções para calcular a diferença, interseção e união
    diferenca(x, y);
    inteserccao(x, y);
    uniao(x, y);

    return 0; // Indica que o programa terminou corretamente
}

// Função que calcula a diferença entre os vetores x e y
void diferenca(int x[], int y[]) {
    printf("Diferença: { ");
    for (int i = 0; i < 5; i++) { // Percorre todos os elementos de x
        int encontrado = 0;       // Flag para verificar se x[i] está em y
        for (int j = 0; j < 5; j++) { // Verifica todos os elementos de y
            if (x[i] == y[j]) {      // Se x[i] está em y[j], marca como encontrado
                encontrado = 1;
                break;               // Sai do laço interno pois já encontramos
            }
        }
        if (!encontrado) {           // Se x[i] NÃO foi encontrado em y
            printf("%d ", x[i]);     // Imprime o elemento que pertence apenas a x
        }
    }
    printf("}\n");
}

// Função que calcula a interseção entre os vetores x e y
void inteserccao(int x[], int y[]) {
    printf("Intersecção: { ");
    for (int i = 0; i < 5; i++) { // Percorre todos os elementos de x
        int encontrado = 0;       // Flag para verificar se x[i] está em y
        for (int j = 0; j < 5; j++) { // Verifica todos os elementos de y
            if (x[i] == y[j]) {      // Se x[i] está em y[j], marca como encontrado
                encontrado = 1;
                break;               // Sai do laço interno
            }
        }
        if (encontrado) {            // Se x[i] foi encontrado em y
            printf("%d ", x[i]);     // Imprime o elemento que pertence a ambos
        }
    }
    printf("}\n");
}

// Função que calcula a união entre os vetores x e y
void uniao(int x[], int y[]) {
    printf("União: { ");
    // Imprime todos os elementos de x
    for (int i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }

    // Verifica e imprime os elementos de y que não estão em x
    for (int j = 0; j < 5; j++) { // Percorre todos os elementos de y
        int encontrado = 0;       // Flag para verificar se y[j] está em x
        for (int k = 0; k < 5; k++) { // Verifica todos os elementos de x
            if (y[j] == x[k]) {      // Se y[j] está em x[k], marca como encontrado
                encontrado = 1;
                break;               // Sai do laço interno
            }
        }
        if (!encontrado) {           // Se y[j] NÃO foi encontrado em x
            printf("%d ", y[j]);     // Imprime o elemento que pertence apenas a y
        }
    }
    printf("}\n");
}
