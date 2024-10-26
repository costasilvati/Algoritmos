#include <stdio.h>
#include <stdlib.h>

/*
Receba 2 notas de 5 alunos em uma matriz de 5 linhas e 2 colunas
 para que calcule a média de cada aluno e,
utilizando a média 6, informe se cada aluno está aprovado ou reprovado.
*/
int main()
{
    float notas[5][2];

    for(int aluno=0; aluno<5; aluno++){
        printf("Aluno %d \n", aluno + 1);
        for(int bim=0; bim<2; bim++){
            printf("Digite a nota do bimestre %d \n", bim+1);
            scanf("%f", &notas[aluno][bim]);
        }
    }

    printf("Aluno \t Bim1 \t Bim2 \t Media \t Situacao\n");
    float soma = 0.0, media = 0.0;

    for(int aluno=0; aluno<5; aluno++){
        soma = 0.0;
        printf("%d \t", aluno + 1);
        for(int bim=0; bim<2; bim++){
            printf("%.2f \t", notas[aluno][bim]);
            soma+=notas[aluno][bim];
        }
        media = soma/2;
        printf("%.2f \t", media);
        if(media >= 6.0){
            printf("Aprovado");
        }else{
            printf("Reprovado");
        }
        printf("\n");
    }

    return 0;
}











