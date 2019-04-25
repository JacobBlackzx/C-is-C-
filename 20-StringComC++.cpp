#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função Principal do Programa
int main(){

    //Definindo uma String
    std::string palavra;

        //Mostrando na Tela
        cout << "Digite uma palavra";

            //Executando uma String
            cin >> palavra;

                //Mostrando uma Variavel
                cout << "\n A palavra é:" << palavra; //Concatenando << palavra

    //Finaliza o Programa apos Executado
    return 0;
}
