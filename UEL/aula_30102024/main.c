#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra1, letra2;
    printf("Digite um caracter \n");
    scanf("%c", &letra1);
    // Segunda leitura
    printf("Digite OUTRO caracter \n");
    scanf(" %c", &letra2);
    printf("Letra 1: %c \t Letra 2: %c \n", letra1, letra2);
    return 0;
}
