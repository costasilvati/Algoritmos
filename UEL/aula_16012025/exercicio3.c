#include <stdio.h>
#include <stdlib.h>
/*
Escreva um procedimento que recebe como parametro as 3 notas de um aluno por
parametro e uma letra.
Se a letra for A o procedimento calcula a media aritmetica
das notas do aluno e se for P, a sua media ponderada
(pesos: 5, 3 e 2).
O procedimento deve imprimir a media calculada.
*/
float calculaMedia(float n1, float n2, float n3, char m);

int main()
{
    float nota1 = 0, nota2=0, nota3=0;
    char tipoMedia = 'A';
    printf("Digite a nota 1\n");
    scanf("%f", &nota1);
    printf("Digite a nota 2\n");
    scanf("%f", &nota2);
    printf("Digite a nota 3\n");
    scanf("%f", &nota3);
    printf("Digite tipo da media: \n A - aritimetica\n P - ponderada \n");
    scanf(" %c", &tipoMedia);
    float media = calculaMedia(nota1, nota2, nota3, tipoMedia);
    printf("A media eh %.2f \n", media);
    return 0;
}

float calculaMedia(float n1, float n2, float n3, char m){
    float media = 0;
    if(m == 'A' || m == 'a'){
        media = (n1+n2+n3)/3;
    }else if(m =='P' || m == 'p'){
        media = ((n1*5)+(n2*3)+(n3*2))/10;
    }else{
        printf("valor inválido!! \n O tipo de media digitado deve ser A ou P.\n");
        return 0.0;
    }
    return media;
}



