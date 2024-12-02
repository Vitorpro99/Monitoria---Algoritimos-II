#include <stdio.h>

void menorNumero(int a, int b);
int main(){
    int a,b;
    printf("Digite o 1° número: ");
    scanf("%d",&a);
    printf("Digite o 2° número: ");
    scanf("%d",&b);

    menorNumero(a,b);
}
void menorNumero(int a, int b){
    if(a < b){
        printf("%d é o menor número", a);
    }
    else if(b < a){
        printf("%d é o menor número", b);
    }
    else{
        printf("São números iguais");
    }
}