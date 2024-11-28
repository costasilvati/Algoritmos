#include <stdio.h>
#include <stdlib.h>

/*
Receba do usu ́ario sua idade expressa em anos, meses e
 dias e o programa exibe sua idade expressa apenas em
 dias.
*/
int main()
{
    int anos=0, meses=0, dias = 0, tempoDias = 0;
    printf("Digite sua idade em anos \n");
    scanf("%d", &anos);
    printf("Voce tem %d anos, e quantos meses? Digite os meses\n", anos);
    scanf("%d", &meses);
    printf("Voce tem %d anos e %d meses. E quantos dias? Digite: \n", anos, meses);
    scanf("%d", &dias);
    tempoDias = (365 * anos) + (30 * meses) + dias;
    printf("Voce ja viveu %d dias. Parabens \n", tempoDias);
    return 0;
}
