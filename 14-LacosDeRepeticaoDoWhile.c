#include <stdio.h>
#include <stdlib.h>

//Função Principal do Programa
void main(){

    //Definição de Variáveis
    int a = 1, b = 10;

        //Contador do sistema
        while(a <= 10){

            //Imprimir resultado de 'a' na Tela
            printf("\n %d", a);

                //Incrementando
                a++; //O a++ é equivalente a formula a = a +1;
        }

//Uso da Variavel DO While

    a = 1;

    do{
        //Imprimir resultado de 'a' na Tela
        printf("\n %d", a);

            //Incrementando
            a++;

    }while(a <= 10);

            //Encerra o programa após Executado
            return;
}
