#include <stdio.h>

int main(){
    int matriz[5][5] = {
    {1,3,4,3,1},
    {2,3,4,1,5},
    {3,2,5,4,1},
    {3,2,3,1,2},
    {1,3,4,4,2}
    };
    int somaLinha = 0, somaDiagonais = 0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            // printf("Digite um valor para posição [%d],[%d]", i, j);
            // scanf("%d",&matriz[i][j]);
            somaLinha += matriz[i][j];
         //+= mesma função de SomaLinha = SomaLinha + matriz[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        somaDiagonais += matriz[i][i];
    }

    int j = 4;
    for(int i = 0; i < 5; i++, j--){
        somaDiagonais+= matriz[i][j];
    }
    printf("Soma das linhas: %d", somaLinha);
    printf("\n Soma das diagonais: %d", somaDiagonais);

}

//     int i = 0;
//      for(int j = 4; j >= 0; j--, i++){
//             somaDiagonais += matriz[i][j];
//         }
//     printf("Soma linhas: %d\n", somaLinha);
//     printf("Soma Diagonais: %d\n", somaDiagonais); 
// }


// i,j 
// 0,4 
// 1,3 
// 2,2 
// 3,1 
// 4,0