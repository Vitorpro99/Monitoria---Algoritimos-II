#include <stdio.h>

int main(){

    int seg;
    int horas,minutos,segundos;

    printf("Digite um tempo em segundos: ");
    scanf("%d", &seg);

    horas = seg / 3600;
    minutos  = (seg % 3600) / 60;
    segundos = seg % 60;

    printf("Segundos: %d \n", segundos);
    printf("Minutos: %d \n", minutos);
    printf("Horas: %d", horas);
    
}