#include <stdio.h>
#include <stdlib.h>

//Função Principal do Programa
void main(){

    //Definição das Variaveis
    int opcao;

        //Confere a Validação do Programa
        while(opcao < 1 || opcao > 3){

        //Executando o Programa Menu
        printf("Escolha uma Opção:");
        printf("\n Opção - 1");
        printf("\n Opção - 2");
        printf("\n Opção - 3 \n\n");

        //Lendo a Opção Escolhida
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\n A Opção 1 foi escolhida");
                break;

            case 2:
                printf("\n A Opção 2 foi escolhida");
                break;

            case 3:
                printf("\n A Opção 3 foi escolhida");
                break;

            default:
                printf("\n Opção Invalida");
                break;
        }
            }

            //Finalizado o programa apos Executado
            return;
}
