#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Comentário de 1 linha
    /*
    Comentáro de várias linhas
    */
    double angulo, seno, cosseno, tangente;

    printf("Digite o angulo em graus: \n");
    scanf("%lf", &angulo);
    printf("O angulo digitado eh: %lf", angulo); // Imprime valor lido
    angulo = angulo *(M_PI/ 180.0);// Valor do angulo em radianos
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);
    printf("Seno: %lf \t Cosseno: %lf \t Tangente: %lf", seno, cosseno, tangente);

    return 0;
}
