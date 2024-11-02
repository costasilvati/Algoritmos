#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo em C que cria uma matriz de 5 linhas e 2
colunas para armazenar as notas de dois bimestres de 5 alunos. O
valor das notas a serem armazenadas devem ser informados pelo
usuário.
*/
int main()
{
    float notas[5][2];
    for(int aluno=0; aluno<5; aluno++){
        printf("Aluno %d \n", aluno);
        for(int bim=0; bim<2; bim++){
            printf("Digite a nota %d \n", bim);
            scanf("%f", &notas[aluno][bim]);
        }
    }
    printf("\nAluno \t nota1 \t nota2 \n");
    for(int aluno=0; aluno<5; aluno++){
        printf("Aluno %d \t", aluno);
        for(int bim=0; bim<2; bim++){
            printf("%.2f \t", notas[aluno][bim]);
        }
        printf("\n");
    }

    return 0;
}
