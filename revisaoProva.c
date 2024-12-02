#include <stdio.h>

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int x, result = 0;

    for(x=0; x<10; x++){
        if(x<5){
            result += vetor[x]; //1 + 2 + 3 + 4 + 5 = 15
        }//0 , 1 , 2 , 3 , 4
        else{
            result -= vetor[x];// -15 - 10 = -25
        }// 5, 6 , 7 , 8 , 9
    }
    printf("Resultado: %d\n", result);
}