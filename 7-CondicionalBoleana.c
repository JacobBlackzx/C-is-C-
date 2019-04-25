#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Função Principal do Programa
void main(){

    //Definição de Variáveis
    bool a = true, b = false;

        //Se A for Verdadeiro
        if(a){
            printf("\n A é Verdadeiro");
        }

        //Se B for Falsa
        if(b){
            printf("\n A é Verdadeiro");
        }else{
            printf("\n B é Falso");
        }

        //Comparação de Falsidade
        if(!b){
            printf("\n B é Falso");
        }

        //Pausa o Programa após Executado
        return;
}
