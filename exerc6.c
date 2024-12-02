#include <stdio.h>


int main() {
   int num = 0, div = 0;

   printf("Digite o numero: ");
   scanf("%d", &num);
   printf("\n");
  
   for (int i = 1; i < num; i++) { // Laço de repetição percorre desde o 1 até número anterior ao número escolhido pelo usuário
       if (num % i == 0) { // Caso o resto da divisão de 0 (no caso a divisão é "perfeita", ele entra na condição para soma)
           div += i; 
       }
   }

   if (div == num) {
       printf("\n%d e um numero perfeito\n", num);
   } else {
       printf("\n%d nao e um numero perfeito\n", num);
   }

   return 0;
}