#include <stdio.h>
#include <stdlib.h>
/* Exemplo: switch com e sem break */

int main()
{
    int n1 =0, n2 = 0, op = 0;
    float resultado = 0;
    printf("Testando switch com break\n");
    printf("\n--- Menu--- \n 1 - multiplicar\n 2 - divisao \n 3 - somar \n 4 - subtrair\n 5 - Sair \n");
    scanf("%d", &op);
    do{

        printf("Digite os dois valores do calculo separados por espaco\n");
        scanf("%d %d", &n1, &n2);
        switch(op){
        case 1:
            resultado = n1*n2;
            printf("O resultado eh: %.2f\n", resultado);
        case 2:
            resultado = n1/n2;
            printf("O resultado eh: %.2f\n", resultado);
        case 3:
            resultado = n1 + n2;
            printf("O resultado eh: %.2f\n", resultado);
        case 4:
            resultado = n1-n2;
            printf("O resultado eh: %.2f\n", resultado);
        default:
            printf("Escolha um valor entre 1 e 4 ou digite 5 para sair\n");
        }
        //printf("O resultado eh: %.2f\n", resultado);
        printf("\n--- Menu--- \n 1 - multiplicar\n 2 - divisao \n 3 - somar \n 4 - subtrair\n 5 - Sair \n");
        scanf("%d", &op);
    }while(op != 5);
    return 0;
}
