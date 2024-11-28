#include <stdio.h>
#include <stdlib.h>

struct produto{
    char descricao[50];
    float valor;
    int quantidade;
};

int main()
{
    struct produto p[2];

    for(int i =0; i<2; i++){
        printf("Digite a quantidade \n");
        scanf("%d", &p[i].quantidade);
        printf("Digite o preco do produto \n");
        scanf("%f", &p[i].valor);
        printf("Digite a descicao do produto \n");
        scanf(" %[^\n]", p[i].descricao);
    }
    for(int j=0; j< 2; j++){
        printf("Produto\n Descricao: %s \n Preco: %.2f\nQuantidade: %d \n",
                                p[j].descricao,p[j].valor, p[j].quantidade);
    }
    return 0;
}
