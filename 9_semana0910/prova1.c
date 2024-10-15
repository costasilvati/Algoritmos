#include<stdio.h>

int main()
{
    int opt =0, qtd=0;
    float despesa = 0.0, saldo = 0.0, receita = 0.0, receitastotal = 0.0;
    do{
        printf("1.Registrar despesa; \n2.Registrar Receitas;\n3.Verificar saldo;\n4.Finalizar;\n");
        scanf("%d", &opt);
        switch(opt){
            case 1:
                printf("Digite o valor da despesa\n");
                scanf("%f", &despesa);
                saldo -= despesa;
                break;
            case 2: 
                printf("Digite o valor da receita\n");
                scanf("%f", &receita);
                saldo += receita;
                receitastotal += receita;
                break;
            case 3:
                printf("O saldo atual eh %.2f \n", saldo);
                break;
            case 4:
                printf("encerrando o sistema \n\n");
                break;
            default:
                printf("Valor digitado invalido\n");
        }
    }while(opt != 4);
    
    printf("Houveram rendimentos?\n1-Sim \t 2-Nao");
    scanf("%d", &opt);
    if(opt == 1){
        float percent = 0;
        printf("Valor percentual dos rendimentos de 1 a 100?\n");
        scanf("%f", &percent);
        float rendimento = receitastotal*(percent/100);
        
        printf("As receitas totais sem rendimentos sao: %.2f", receitastotal);
        printf("As receitas totais COM rendimentos sao: %.2f", (receitastotal+rendimento));
    }
    return 0;
    
}
