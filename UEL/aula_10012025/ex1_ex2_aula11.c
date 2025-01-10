#include <stdio.h>
#include <stdlib.h>
/*
1 - Escreva um algoritmo em C que cria uma matriz de 5
linhas e 2 colunas para armazenar as notas de dois bimestres de
5 alunos. O valor das notas a serem armazenadas devem ser
informados pelo usuario.
2 - Altere o algoritmo anterior para que calcule a media
de cada aluno e, utilizando a media 6, informe se cada
aluno esta aprovado ou reprovado.
*/
int main(){
    int linhas = 5, colunas = 2;
    float matriz[linhas][colunas];

    for(int l=0; l<linhas; l++){ // Percorre linhas
        for(int c=0; c<colunas; c++){ // Percorre colunas da linah l
            printf ("Digite a nota %d do aluno %d \n", c+1, l+1);
            scanf("%f", &matriz[l][c]);
            while(matriz[l][c] > 10){
                printf("Nota invalida! Nota de ser menor que 10\n");
                printf ("Digite a nota %d do aluno %d \n", c+1, l+1);
                scanf("%f", &matriz[l][c]);
            }
        }
    }
    float soma = 0, media = 0;
    // Calculando media e aprovacao
    for(int l=0; l<linhas; l++){ // Percorre linhas
        soma = 0; // Apaga soma da linha anterior
        for(int c=0; c<colunas; c++){ // Percorre colunas da linah l
            soma+=matriz[l][c]; // Soma colunas da linha l
        }
        media = soma/colunas;//Media da linha
        printf("A media do aluno %d eh: %.2f\n",l+1, media);
        if(media >= 6.0){
            printf("Aluno aprovado!\n");
        }else{
            printf("Aluno reprovado. \n");
        }
    }
    return 0;
}
