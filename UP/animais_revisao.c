/*
Desenvolva um sistema em C que regstre 5 estruturas de animal.
Animal tem nome, peso, idade.
Registre 5 animais e imprima qual animal tem o maior peso e qual a
media de idade dos animais. Use funções.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct animal{
    char nome[30];
    float peso;
    int idade;
};
// Variável global
float maiorPeso = 0.0;
// Função para variável global
void verMaiorPesoGlobal(float novoPeso){
    if(novoPeso > maiorPeso){
        maiorPeso = novoPeso;
    }
}

/*
//Variável local
float verMaiorPeso(float novoPeso, float maiorP){
    if(novoPeso > maiorP){
        maiorP = novoPeso;
    }
    return maiorP;
}
*/
float calculaMedia(int valores[5]){
    float soma = 0.0;
    for(int i=0; i<5; i++){
        soma += valores[i];
    }
    return (soma/5);
}

int main(){
    struct animal animais[5];
    int idades[5];
    // Variável local
    // float maiorPeso = 0.0;
    for(int i=0; i<5; i++){// ler 5 animais
        printf("Digite o NOME do animal %d\n", i);
        scanf(" %[^\n]", animais[i].nome);
        printf("Digite o PESO do animal %d \n", i);
        scanf("%f", &animais[i].peso);
        printf("Digite a IDADE do animal %d \n", i);
        scanf("%d", &animais[i].idade);
        idades[i] = animais[i].idade;
        //Variavel local
        //maiorPeso = verMaiorPeso(animais[i].peso, maiorPeso);
        //Variável maiorPeso global e funcao void
        verMaiorPeso(animais[i].peso);
    }
    float mediaIdade = calculaMedia(idades);
    printf("A media das idades eh %.2f", mediaIdade);
    printf("O maior peso eh %.2f", maiorPeso);
}
