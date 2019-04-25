#include <stdio.h>
#include <stdlib.h>

//Função Principal do Programa
void main(){

    //Definição de Variáveis
    int a = 1;
    char b = 'x';

        //
        if(a == 1){
            printf("\n Opção Escolhida: 1");
        }else if(a == 2){
            printf("\n Opção Escolhida: 2");
        }else if(a == 3){
            printf("\n Opção Escolhida: 3");
        }else{
            printf("\n Opção Inválida!");
        }

        switch(a){
            case 1:
                printf("\n Opção Escolhida: 1");
                    break;

            case 2:
                printf("\n Opção Escolhida: 2");
                    break;

            case 3:
                printf("\n Opção Escolhida: 3");
                    break;
            default:
                printf("\n Opção Inválida!");
                    break;

        }

            //Pausar o Programa Após Executado
            return;

}
