#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função Principal do Programa
int main(){

    //vetor = [0][1][2]

    //matriz = [1][2]
    //         [3][4]

    //Criando uma Matriz
    int matriz[2][2], i, j;

    //Passando Valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //Mostrar na tela Resultado
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++)
            cout << "\n i = " << i << " , j =" << j;
    }

        //Finaliza o programa apos Executado
        return 0;
}
