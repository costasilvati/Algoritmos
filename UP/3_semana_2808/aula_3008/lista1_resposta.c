#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tempo, distancia, vm;
    printf("Digite o tempo gasto na viagem\n");
    scanf("%lf", &tempo);
    printf("Digite a distancia percorrida \n");
    scanf("%lf", &distancia);

    vm = distancia/tempo;

    printf("A velocidade media eh %lf", vm);
    return 0;
}

