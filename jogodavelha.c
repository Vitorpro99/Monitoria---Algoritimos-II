#include <stdio.h>

void desenhaTabela(int velha[3][3],int linha,int coluna){
        printf("- - - - - - -\n");
        for (linha=0;linha<=2;linha++)
        {
            for (coluna=0;coluna<=2;coluna++)
            {
                
            if(coluna == 0){
                 printf("|");
            }
                if (velha[linha][coluna] == 1)
                   printf (" X |");
                else
                  if (velha[linha][coluna] == 2)
                     printf (" O |");
                  else
                     printf ("   |");
            }
            if (linha != 2)
               printf ("\n-------------\n");
            else
               printf ("\n");
        }

    }

int main()
{
    int velha[3][3]={0};
    int soma_jog1 = 0; // var para verificar se o jogador 1 ganhou
    int soma_jog2 = 0; // var para verificar se o jogador 2 ganhou
    int linha, coluna;
    int jogador=1;
    int nro_jogada=1;
   
    while (nro_jogada <=9)
    {
        printf ("Jogada %d do jogador %d\n", nro_jogada, jogador);
        printf ("Informe a linha e coluna: ");
        scanf ("%d %d", &linha, &coluna);
        if ((linha < 0) || (linha > 2) || (coluna < 0) || (coluna > 2))
           {
               printf ("\nPosicao invalida !!!!\n");
               continue;
           }
        if (velha[linha][coluna] != 0)
           {
               printf ("\nPosicao ja' preenchida!!!\n");
               continue;
           }
        velha[linha][coluna] = jogador;
        if (jogador == 1)
           jogador = 2;
        else
           jogador = 1;
        nro_jogada++;
        printf("- - - - - - -\n");
        for (linha=0;linha<=2;linha++)
        {
            
            for (coluna=0;coluna<=2;coluna++)
            {
                
            if(coluna == 0){
                 printf("|");
            }
                if (velha[linha][coluna] == 1)
                   printf (" X |");
                else
                  if (velha[linha][coluna] == 2)
                     printf (" O |");
                  else
                     printf ("   |");
            }
            if (linha != 2)
               printf ("\n-------------\n");
            else
               printf ("\n");
        }
    printf("- - - - - - - -\n");
     // Verificar linhas;
 
     for (linha=0;linha<=2;linha++)
     {
        soma_jog1 = 0;
        soma_jog2 = 0;
        for (coluna=0;coluna<=2;coluna++)
        {
            if (velha[linha][coluna] == 1)
               soma_jog1 = soma_jog1 + 1;
            if (velha[linha][coluna] == 2)
               soma_jog2 = soma_jog2 + 2;
        }
        for (linha=0;linha<=2;linha++)
        {
            if (velha[linha][coluna] == 1)
               soma_jog1 = soma_jog1 + 1;
            if (velha[linha][coluna] == 2)
               soma_jog2 = soma_jog2 + 2;
        }
        //Verificação em diagonal jogador 1
        if(velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1){
            printf ("\n\nJogador 1 venceu!!!! tabela final\n");
            desenhaTabela(velha,linha,coluna); 
            return 1;
        }
        if(velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0] == 1){
            printf ("\n\nJogador 1 venceu!!!!");
            return 1;
        }
        if(velha[0][0] == 2 && velha[1][1] == 2 && velha[2][2] == 2){
            printf ("\n\nJogador 1 venceu!!!!");
            return 1;
        }
        if(velha[0][2] == 2 && velha[1][1] == 1 && velha[2][0] == 2){
            printf ("\n\nJogador 1 venceu!!!!");
            return 1;
        }
        
        if (soma_jog1 == 3)
        {
            printf ("\n\nJogador 1 venceu !!!!");
            return 1;
        }
        if (soma_jog2 == 6)
        {
            printf ("\n\nJogador 2 venceu !!!!");
            return 1;
        }
    }
     // fim verificar linhas;
    }
     
   
}
// void desenhaTabela(int velha[3][3],int linha,int coluna){
//         printf("- - - - - - -\n");
//         for (linha=0;linha<=2;linha++)
//         {
//             for (coluna=0;coluna<=2;coluna++)
//             {
                
//             if(coluna == 0){
//                  printf("|");
//             }
//                 if (velha[linha][coluna] == 1)
//                    printf (" X |");
//                 else
//                   if (velha[linha][coluna] == 2)
//                      printf (" O |");
//                   else
//                      printf ("   |");
//             }
//             if (linha != 2)
//                printf ("\n-------------\n");
//             else
//                printf ("\n");
//         }

//     }
