#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*

2. Implemente um algoritmo em C que recebe do usuario o
peso e altura de uma pessoa e calcule o seu
IMC (IMC = peso/altura2). O seu algoritmo deve mostrar
em tela o valor do IMC calculado e deve informar a
classificac ̧ ̃ao da pessoa, de acordo com a seguinte tabela:
Menor que 18,5      - Magreza
Entre 18,5 e 24,9   - Peso normal
Entre 25 e 29,9     - Sobrepeso
Maior que 30        - Obeso
*/
int main(){
    float altura=0, peso= 0, imc = 0;
    printf("Digite sua altura\n");
    scanf("%f", &altura);
    printf("Digite seu peso \n");
    scanf("%f", &peso);
    imc = peso / pow(altura,2);

    printf("IMC: %.2f \n\n", imc);
    printf("Com base no seu IMC sua classificação de peso eh ");
    if(imc < 18.5){
        printf("Magreza \n");
    }else if(imc <= 24.9){
        printf("Peso Normal\n");
    }else if(imc < 29.9){
        printf("Sobrepeso \n");
    }else{
        printf("Obeso\n");
    }
    return 0;
}
