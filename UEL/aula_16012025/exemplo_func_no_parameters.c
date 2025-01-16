#include <stdio.h>
#include <stdlib.h>

void imprimeLinha(char simbolo, int repete);

int main(){
    imprimeLinha('=', 50);
    printf("\n Computacao \n");
    imprimeLinha('*', 10);
    return 0;
}

void imprimeLinha(char simbolo, int repete){
    for(int i=0; i<repete; i++){
        printf("%c", simbolo);
    }
}
