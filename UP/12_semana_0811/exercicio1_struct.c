#include <stdio.h>
#include <stdlib.h>

struct produto{
    char descricao[50];
    int valor;
    int quantidade;
};

int main()
{
    struct produto p1;
    struct produto p2;
    int qtd = 0;
    float preco = 0;

    for(int i =0; i<2; i++){
        printf("Digite a quantidade \n");
        scanf("%d", &qtd);
        printf("Digite o preco do produto \n");
        scanf("%f", &preco);
        printf("Digite a descicao do produto \n");
        if(i==0){
            scanf(" %[^\n]", p1.descricao);
            p1.valor = preco;
            p1.quantidade = qtd;
            printf("Produto\n Descricao: %s \n Preco: %d\nQuantidade: %d \n",p1.descricao,p1.valor, p1.quantidade);
        }else{
            scanf(" %[^\n]", p2.descricao);
            p2.valor = preco;
            p2.quantidade = qtd;
            printf("Produto\n Descricao: %s \n Preco: %d\nQuantidade: %d \n",p2.descricao,p2.valor, p2.quantidade);
        }
    }



    return 0;
}
