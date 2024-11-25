#include <stdio.h>

int par(int num);
int main(){
    int num1;
    printf("Digite um número: ");
    scanf("%d",&num1);
        if(par(num1) != 0){
            printf("É par");
        }
        else
            printf("Não é par");
}
int par(int num){
    if(num % 2 == 0){
        return 1;
}
else{
    return 0;
}
}