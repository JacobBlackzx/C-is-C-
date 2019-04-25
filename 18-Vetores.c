#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Função Principal do Programa
void main(){

    //Declaração de Variaveis
    int vetor[TAM], cont;

        //Vetores
        vetor[0] = 5;
        vetor[1] =10;
        vetor[2] = 15;

            //Mostrar na Tela
            printf("\n Posição 0: %d", vetor[0]);
            printf("\n Posição 1: %d", vetor[1]);
            printf("\n Posição 2: %d", vetor[2]);

                //Mostrar em laço de repetição
                for(cont = 0; cont < TAM; cont++){
                    printf("\n Posição %d : %d", cont, vetor[cont]);
                }

                    //Finalizar programa após a Execução
                    return;
}
