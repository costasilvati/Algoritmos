#include <stdio.h>
#include <stdlib.h>

/*
Receba o preco do litro de um combustıvel e o valor em
dinheiro que se deseja abastecer. O programa mostra quantos
litros serao comprados. (Ex: a gasolina custa R$ 5,90 e o
motorista quer abastecer R$ 59,00 = 10 litros);
*/
int main()
{
    float litro=0.0, abastecer=0.0, litrosAbastecidos = 0.0;
    printf("Qual o valor do litro de combustivel? \n");
    scanf("%f", &litro);
    printf("Qual o valor de abastecimento \n");
    scanf("%f", &abastecer);
    litrosAbastecidos = abastecer/litro;
    printf("Voce abasteceu %.2f litros de combustivel \n", litrosAbastecidos);
    return 0;
}
