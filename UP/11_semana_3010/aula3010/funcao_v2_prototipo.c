#include <stdio.h>
#include <stdlib.h>

/*
    Exemplo de funcao sem retorno e sem parametro
*/
void minhaFuncao(); // Prot—tipo da funcao

int main()
{
    printf("Ola! Executando a main \n");
    minhaFuncao(); // chamada
    return 0;
}

//Declaracao da funcao
void minhaFuncao(){
    printf("Executou a funcao minhaFuncao \n");
}









