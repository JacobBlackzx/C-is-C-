#include <stdio.h>
#include <stdlib.h>

//Função Principal do Programa
void main(){

    //Definição das Variaveis
    int cont;

        //Contando ate 10
        for(cont = 1; cont <= 10; cont++){
            printf("\n %d", cont);
        }

        //Tabuda Cont do 2
        for(cont = 1; cont <= 10; cont++){
            printf("\n 2 X %d = %d", cont, 2 * cont);
        }

        //Tabuada Cont do 3
        for(cont = 1; cont <= 10; cont++){
            printf("\n 3 X %d = %d", cont, 3 * cont);
        }

        //Tabudada Cont do 4
        for(cont = 1; cont <= 10; cont++){
            printf("\n 4 X %d = %d", cont, 4 * cont);
        }

        //Tabuada Cont do 5
        for(cont = 1; cont <= 10; cont++){
            printf("\n 5 X %d = %d", cont, 5 * cont);
        }

        //Contador Regressivo
        for(cont = 10; cont > 0; cont--){
            printf("\n %d", cont);
        }

 //Finaliza o programa apos a Execução
 return;
}
