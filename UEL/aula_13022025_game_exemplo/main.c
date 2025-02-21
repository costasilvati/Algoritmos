#include <stdio.h>
#include <stdlib.h>

typedef struct user{
    int id;
    char nome[50];
} Jogador;

void exibeTabuleiro(int d, int (*t)[d]);
int registraJogada(Jogador j, int dim, int (*t)[dim]);
int verificaVitoria(Jogador j, int dim, int (*t)[dim]);

int main()
{
    int dim = 3;
    int *tabuleiro[dim][dim];
    int qtdJogadores = 2;
    Jogador jogadores[qtdJogadores];
    //inicia tabuleiro
    int t[dim][dim];
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // Inicializa jogadores
    for(int i=0; i<qtdJogadores; i++){
        printf("Digite o nome do jogador %d\n", i+1);
        scanf(" %[^\n]", jogadores[i].nome);
        jogadores[i].id = i+1;
    }
    // Jogar
    int option = 0, finish = 0, jogadas = 1;
    do{
        for(int i=0; i<qtdJogadores; i++){
            exibeTabuleiro(dim, tabuleiro);
            finish = registraJogada(jogadores[i], dim, tabuleiro);
        }
        jogadas++;
    }while(option != 0 && finish != 1 && jogadas < dim*dim);
    return 0;
}


void exibeTabuleiro(int d, int (*t)[d]){
    printf("\n    0   1   2 \n");
    printf("   -------------\n");
    for(int i=0; i<d; i++){
            printf("%d |", i);
        for(int j=0; j<d; j++){
            if(t[i][j] == 1){
                printf(" X |");
            }else if(t[i][j]== 2){
                printf(" O |");
            }else{
                printf("   |", t[i][j]);
            }
        }
        printf("\n   -------------\n");
    }
}

int registraJogada(Jogador j, int dim, int (*t)[dim]){
    int linha = 0, coluna = 0;
    do{
        printf("Jogador %s \nDigite a posicao da jogada (linha coluna)\n (ex.: 0 1)\n", j.nome);
        printf("\n --- Os valores devem ser menores que %d\n", dim);
        scanf("%d %d", &linha, &coluna);
        if(t[linha][coluna] > 0){
            printf("Posi‹o invalida! \n");
            printf("Linha: %d | Coluna: %d - Ja esta preenchida\n", linha, coluna);
            linha = 0;
            coluna = 0;
        }
    }while(linha >= dim || linha < 0 ||  coluna >= dim || coluna < 0);
    t[linha][coluna] = j.id;

    return verificaVitoria(j, dim, t);
}

int verificaVitoria(Jogador j, int dim, int (*t)[dim]){
    int sumLine = 0, sumCol = 0;
    // linhas
    for(int i=0; i< dim; i++){
        for(int j=0; j< dim; j++){
            if(t[i][j] != 0){
                sumLine+=t[i][j];
                sumCol+=t[j][i];
            }
        }
        if(sumLine == j.id*dim || sumCol == j.id*dim){
            return 1;
        }
    }
    return 0;
}
