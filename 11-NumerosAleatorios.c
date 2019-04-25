#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função Principal do Programa
void main(){

    //Responsavel por Alimentar o Rand de Forma Diferente
    srand((unsigned)time(NULL));

    //Variável que Recebe o Resto da Divisão
    int aleatorio = rand() % 3;

    //Imprime o Valor
    printf("%d", aleatorio);


        //Pausar o Programa Após Executado
        return;
}
