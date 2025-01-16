#include <stdio.h>
#include <stdlib.h>

int minhaFuncao();

int main(){
    int var=0;
    var = minhaFuncao();// funcao com return (tipo int)
    printf("minhaFuncao retornou %d\n", var);
    return 0;
}

int minhaFuncao(){
    printf("Executou minhaFuncao \n");
    return 1;
}
