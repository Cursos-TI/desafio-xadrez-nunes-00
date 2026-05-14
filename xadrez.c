#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverBispo(int casas){
    if(casas <= 0){
        return;}
    
//loop vertical
 for(int vertical = 1; vertical <= 1; vertical++){
    //loop horizontal
    int horizontal = 1;

    while(horizontal <= 1){
        printf("Cima, Direita\n");
        horizontal++;}
    }    
moverBispo(casas - 1);

}


void moverTorre(int casas){
    if(casas <= 0){
    return;}

  printf("Direita\n");

  moverTorre(casas - 1);
}

void moverRainha(int casas){
    if(casas <= 0){
        return;
    }
printf("Esquerda\n");

moverRainha(casas - 1);
}



int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   int casasTorre = 5;
   int casasBispo = 5;
   int casasRainha = 8; 

   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
   printf("Movimento do Bispo \n");

   moverBispo(casasBispo);



printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

printf("Movimento da Torre\n");


moverTorre(casasTorre);

printf("\n");


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

printf("Movimento da Rainha\n");

moverRainha(casasRainha);




printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

//movimentodo cavalo
printf("movimento do Cavalo\n");

for(int vertical = 1, horizontal = 1;
    vertical <= 2 || horizontal <= 1;
    vertical++){
        //movimento vertical
        if(vertical <= 2){
            printf("Cima\n");
        }

if(vertical == 2){
    while(horizontal <= 1){
        printf("Direita\n");
        horizontal++;
    }
}
    }













    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
