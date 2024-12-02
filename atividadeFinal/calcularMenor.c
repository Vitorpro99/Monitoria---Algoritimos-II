#include <stdio.h>

int main(){
    
    int numeros[10];
    int n;
    

    for(int i = 0; i < 10; i++){
        printf("Digite o %d° número: ",i+1);
        scanf("%d",&numeros[i]);
    }
    printf("Digite um número: ");
    scanf("%d", &n);


    printf("Menores que %d: ", n);
    for(int i = 0; i < 10; i++){
        if(n > numeros[i]){
            printf(" %d ",numeros[i]);
        }
    }
}