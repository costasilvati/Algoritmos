#include <stdio.h>
#include <stdlib.h>

/*
    Exemplo de funcao sem retorno e com 2 parametros
    Esta funcao, recebe 2 numeros, faz a soma e imprime
*/
void soma(int n1, int n2); // Prot—tipo da funcao

int main()
{
    int num1 =0, num2 = 0;
    printf("Digite um numero\n");
    scanf("%d", &num1);
    printf("Digite outro numero\n");
    scanf("%d", &num2);

    soma(num1, num2); // chamada da funcao com passagem de parametro

    printf("Terminou o programa!");
    return 0;
}

//Declaracao da funcao
void soma(int n1, int n2){
    //printf("A soma eh %d\n", (n1+n2)); // versao resumida
    int s = n1 + n2;
    printf("A soma eh %d \n", s);

}









