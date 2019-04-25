#include <stdio.h>
#include <stdlib.h>

//Função Principal do Programa
void main(){

    //Declaração de Variáveis
    int a = 10;

        //Conectivo Lógico E (END) se UMA COMPARAÇÃO FOR FALSA, não entra no Bloco
        if(a > 5 && a < 15){
            printf("\n A variavel 'a' esta entre 5 e 15");
        }
        //Conectivo Lógico E (OR) se UMA COMPARAÇÃO FOR VERDADEIRA, entra no Bloco
        if(a > 5 || a > 15){
            printf("\n A variavel 'a' é maior que 5 ou 15");
        }

            //Pausa o Programa após Executado
            return;

}
