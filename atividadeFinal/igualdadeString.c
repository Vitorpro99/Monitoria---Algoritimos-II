#include <stdio.h>

int main(){
    char palavra1[5] = {'t','e','r','m','o'};
    char palavra2[5] = {'t','e','n','i','s'};

    for(int i = 0; i < 5; i++){
        // int encontrado = 0;
        for(int j = 0; j < 5; j++){
            if(palavra1[i] == palavra2[j]){
                printf(" %c ", palavra1[i]);
                break;
            }
        }
        // if(encontrado == 1){
        //     printf(" %c ", palavra1[i]);
        //     encontrado = 0;
        // }
    }  
}