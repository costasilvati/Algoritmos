#include <stdio.h>
#include <math.h>

int main() {
    double angulo, seno, cosseno, tangente;

    printf("Digite o valor do ângulo em graus: ");
    scanf("%lf", &angulo);

    angulo = angulo * (3.14  / 180.0); 

    // Calcula o seno, cosseno e tangente do ângulo
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);

    // Exibe os resultados
    printf("Seno: %lf\n", seno);
    printf("Cosseno: %lf\n", cosseno);
    printf("Tangente: %lf\n", tangente);

    return 0;
}
