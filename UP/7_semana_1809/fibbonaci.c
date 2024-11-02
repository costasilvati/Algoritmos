
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int ant, atual, prox, num;
    printf("Digite um valor\n");
    scanf("%d", &num);
    ant = 1;
    atual = 1;
    prox = 0;
    while(prox < num){
        if(ant == 1 && atual == 1){
            printf("%d - %d - ", ant, atual);
        }else{
            printf("%d - ", prox);
        }
        prox = ant + atual;
        ant = atual;
        atual = prox;
    }
    return 0;
}
