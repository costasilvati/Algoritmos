#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  main()
{
    double peso, altura, imc;
    printf("Digite seu peso \n");
    scanf("%lf", &peso);
    printf("Digite sua altura\n");
    scanf("%lf", &altura);
    imc = peso/ pow(altura, 2);
    printf ("Seu imc eh: %.2lf \n", imc);
    if(imc < 18.5){
        printf("Seu imc indica magreza \n");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Seu imc indica peso normal \n");
    }else if(imc >= 25 && imc <= 29.9){
        printf("Seu imc indica sobrepeso \n");
    }else {
        printf("Seu imc indica obesidade \n");
    }

    return 0;
}
