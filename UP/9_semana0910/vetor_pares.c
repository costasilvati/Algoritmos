#include<stdio.h>

int main()
{
    int vetor[10], var=0;
    for(int i=0; i<10; i++){
        var +=2;
        vetor[i] = var;
        //vetor[i] = 2+(i*2);
    }
    // Exibir
    for(int i=0; i<10; i++){
        printf("vetor[%d]: %d \n", i, vetor[i]);
    }
    return 0;
}
