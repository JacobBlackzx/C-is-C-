#include <stdio.h>
#include <stdlib.h>

//Função principal do Programa
void main(){

    //Definição de Variaveis
    char palavra[255];

    //Mostra na tela
    printf("\n Digite uma palavra");

        //Limpa o Buffer da memoria
        setbuf(stdin, 0);

            //Executa a String
            fgets(palavra, 255, stdin);

                //Libera Memoria nao utilizada pelo Programa
                palavra[strlen(palavra)-1] = '\0';

                //
                printf("\n %d", palavra);

    //
    return;

}
