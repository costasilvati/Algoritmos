#include<stdio.h>

int main()
{
    int opt =0, pontucao = 0, registros = 0;
    do{
        printf("1.Falta: -1pts\n2.Gol: 10pts\n3.Cartão: -2pts\n4.Vitoria: 3pts\n");
        printf("5.Empate: 1pts\n6.Derrota: 0pts\n7.Finalizar o jogo \n");
        scanf("%d", &opt);
        switch(opt){
            case 1:
                pontucao-=1;
                registros++;
                break;
            case 2:
                pontucao+=10;
                registros++;
                break;
            case 3:
                pontucao-=2;
                registros++;
                break;
            case 4:
                pontucao+=3;
                registros++;
                break;
            case 5:
                pontucao+=1;
                registros++;
                break;
            case 6:
                registros++;
                break;
            case 7:
                printf("Finaliza o jogo\n");
                break;
            default:
                printf("Valor inválido\n");
        }
    }while(opt != 7);
    int desempenho = 0;
    printf("O desempenho foi bom?\n 1-SIM \t 2-NAO\n");
    scanf("%d", &opt);
    if(opt == 1){
        printf("Qual a nota?\n");
        scanf("%d", &desempenho);
        printf("A pontucao com nota de desempenho foi %d\n", (pontucao + desempenho ));
        
    }
    printf("A pontucao total foi %d\n O total de registros foi %d\n", pontucao, registros);
    return 0;
    
}
