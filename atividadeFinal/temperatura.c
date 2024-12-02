#include <stdio.h>

int main(){
    int temperatura;

    printf("Digite um temperatura: ");
    scanf("%d",&temperatura);

    if(temperatura >= 40){
        printf("Muito quente! \n");
    }
    else if(temperatura >= 30){
        printf("Quente");
    }
    else if(temperatura >= 20){
        printf("Agradavel");
    }
    else{
        printf("Frio");
    }
}