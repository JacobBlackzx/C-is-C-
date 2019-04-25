#include <stdio.h>
#include <stdlib.h>

//Função Principal do Programa
void main(){

    //Definição de Variáveis
    int a = 5,opcao = 1;
    float b = 2.5;
    char c = 'x';

        //Condicional Simples
        if(a == 5){
            printf("\n A variavel a = 5");
        }

        if(b == 2.5){
            printf("\n A variavel b = 2.5");
        }

        if(c == 'x'){
            printf("\n A variavel c = Letra x");
        }

        //Número Par ou Impar
        if(a % 2 == 1){
            printf("\n A variavel a é Impar");
        }else{
            printf("\n A variavel a é Par");
        }

        //Condicional Composta
        if(opcao == 1){
            printf("\n A opcao = 1");
        }else if(opcao == 2){
            printf("\n A opcao = 2");
        }else{
            printf("\n A opcao não é igual a 1 e nem a 2");
        }

            //Pausa o Programa após Executado
            return;
}
