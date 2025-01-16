#include <stdio.h>
#include <stdlib.h>
/*
Envie um valor por parametro, escreva uma função
que edite o valor recebido e imprima este mesmo valor após a
execucao da funcao.
*/
void editar(int n1);

int main(){
    int num1 =0;
    printf("Digite o valor 1\n");
    scanf("%d", &num1);
    editar(num1);
    printf("O valor num1 eh: %d\n", num1);
    return 0;
}

void editar(int n1){
    n1++;
    printf("em editar n1 vale %d\n", n1);
}
