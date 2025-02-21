#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *pp;
    int *p1, p2=10;
    p1 = &p2;
    // recebe endereco de um int
    pp = &p2;
    //printf("valor em pp %d\n", pp); // ERRO
    printf("Conteudo em pp %d\n", *(int*)pp);
    return 0;
}

