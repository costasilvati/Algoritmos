#include <stdio.h>
#include <stdlib.h>

int  main()
{
    double h, pesoideal;
    char genero;
    printf("Digite sua altura \n");
    scanf("%lf", &h);
    printf("Digite seu genero: \nF para feminino \nM para masculino");
    scanf(" %c", &genero);

    if(genero == 'f' || genero == 'F'){
        pesoideal = (62.1 * h) - 44.7;
    }else if(genero == 'm' || genero == 'M'){
        pesoideal = (72.7 * h) - 58;
    }else{
        printf("Genero %c nao encontrado", genero);
    }
    printf("O seu peso ideal eh %.2lf", pesoideal);

    return 0;
}

