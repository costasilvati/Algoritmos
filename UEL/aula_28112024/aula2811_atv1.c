#include <stdio.h>
#include <stdlib.h>
/*

1 Escreva um algoritmo em C que recebe dois números
inteiros do usuarios e verifica se ambos os numeros
sao pares. Em caso positivo imprimir a mensagem
”Ambos os nu ́meros informados s̃ao pares!”.
Em caso negativo, verificar se algum dos dois
numeros e par e informar.
*/
int main(){
    int valor1=0, valor2 = 0;
    printf("Digite 2 numeros inteiros\n");
    scanf("%d %d", &valor1, &valor2);
    if(valor1%2==0 && valor2%2==0){
        printf("Ambos sao pares \n");
    }else if(valor1%2==0){ // valor 1 eh par?
        printf("O valor %d eh par\n", valor1);
    }else if(valor2%2==0){ // Valor 2 eh par??
        printf("O valor %d eh par\n", valor2);
    }else{
        printf("Nenhum dos valores eh par\n");
    }
    return 0;
}
/*
int main(){
    int valor1=0, valor2 = 0;
    printf("Digite 2 numeros inteiros\n");
    scanf("%d %d", &valor1, &valor2);
    if(valor1%2==0 && valor2%2==0){
        printf("Ambos sao pares \n");
    }else if(valor1%2==0 ||valor2%2==0){
        printf("Um dos valores eh par\n");
    }else{
        printf("Nenhum dos valores eh par\n");
    }
    return 0;
}
*/
