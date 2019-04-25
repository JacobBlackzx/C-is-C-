#include <stdio.h>
#include <stdlib.h>

//Função Principal do Programa
void main(){

    //Declarações de Variáveis
    int a = 5, b = 10, c = 15;

        //Maior
        if(a > 2){
            printf("\n %d é Maior que 2", a);
        }

        //Menor
        if(a < 10){
            printf("\n %d é Menor que 10", a);
        }

        //Maior ou Igual
        if(c >= b){
            printf("\n %d é Maior ou Igual %d", c, b);
        }

        //Menor ou Igual
        if(a <= 10){
            printf("\n %d é Menor ou Igual 10", a);
        }

        //Diferente
        if(c != 10){
            printf("\n %d Não é 10", c);
        }

            //Pausa o Programa após a Execução
            return;
}
