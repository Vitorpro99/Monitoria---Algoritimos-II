#include <stdio.h>

int bissexto(int ano);
int main(){
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if(bissexto(ano) == 1){
        printf("%d é um ano bissexto", ano);
    }
    else{
        printf("%d não é um ano bissexto", ano);
    }
}
int bissexto(int ano){
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
        return 1;
    }
    else return 0;
}