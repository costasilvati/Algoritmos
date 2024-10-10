#include<stdio.h>

int main()
{
    int vetor[10];// declara vetor
    for(int i=0; i<10; i++){
        printf ("Digite um valor para a posicao %d do vetor \n", i);
        scanf("%d", &vetor[i]);
        //vetor[i] = 0;
    }
    for(int j=0; j<10; j++){ // imprimindo vetor
        printf("[%d] ", vetor[j]);
    }
    return 0;
}
