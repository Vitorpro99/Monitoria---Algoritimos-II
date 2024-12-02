#include <stdio.h>

void diferenca(int x[], int y[]);
void intersecao(int x[], int y[]);
void uniao(int x[], int y[]);
int main() {
    // Declaração e inicialização dos vetores x e y
    int x[5] = {1, 3, 5, 7, 9}; // Conjunto x
    int y[5] = {1, 2, 3, 4, 5}; // Conjunto y

    // Chama as funções para calcular a diferença, interseção e união
    diferenca(x, y);
    intersecao(x, y);
    uniao(x, y);

    return 0;
}

// Função para calcular a diferença entre os conjuntos
void diferenca(int x[], int y[]){
    printf("Diferença: { ");
    for(int i = 0; i < 5; i++){
        int encontrado = 0;// 1 = encontrado 
        for(int j = 0; j < 5; j++){
            if(x[i] == y[j]){
                encontrado = 1;
                break;
            }
        }
        if(encontrado == 0){
            printf("%d ", x[i]); // 3 = encontrado 
        }
    }
    printf(" } \n");
}


//  Função para calcular a intersecção dos conjuntos
void intersecao(int x[], int y[]){
    printf("Intersecção: { ");
    for(int i = 0; i < 5; i++){
        int encontrado = 0;
        for(int j = 0; j < 5; j++){
             if(x[i] == y[j]){
                encontrado = 1;
                break;
            }
        }
        if(encontrado == 1){
            printf("%d ", x[i]);
        }        
    }
    printf(" }\n");
}
//  Função para calcular a união dos conjuntos
void uniao(int x[], int y[]){
    printf("União: { ");
    for(int i = 0; i < 5; i++){
        printf("%d ", x[i]);
    }
    for(int j = 0; j < 5; j++){
        int encontrado = 0;
        for(int k = 0; k < 5; k++){
            if(y[j] == x[k]){
                encontrado = 1;
                break;
            }
        }
        if(encontrado == 0){
            printf("%d ", y[j]); 
        }
    }

    // for(int i = 0; i < 5; i++){
    //     int ordenado[7];
    //     for(int i = 0; i < 7; i++){
    //         if(x[i] < y[i]){
    //             ordenado[i] = x[i];
    //         }
    //         else
    //         {
    //             ordenado[i] = y[i];
    //         }
    //     }
        
    // }

    printf(" }\n");
}