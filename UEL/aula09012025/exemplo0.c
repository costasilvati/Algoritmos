#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores[100];
    for(int i=0; i<100; i++){
        valores[i] = rand()%100;
        // imprimir sem usar as linhas 12 a 15
        //printf("valores[%d]: %d \n", i, valores[i]);
    }

    for(int j=0; j<100; j++){
        printf("valores[%d]: %d \n", j, valores[j]);
    }

    return 0;
}
