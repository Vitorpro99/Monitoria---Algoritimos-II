#include <stdio.h>

int main() {
    int matriz[2][2];
    int i, j;

    // Leitura dos valores da matriz
    printf("Digite os valores da matriz 2x2:\n");
    for (i = 0; i < 2; i++) {

        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        
        }
    }

    printf("\nMatriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibindo a matriz
    printf("\nMatriz 2x2 (com as posições):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("[%d] [%d] %d ",i,j, matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}