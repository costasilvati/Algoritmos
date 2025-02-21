#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10, 9, 5};
    // arr sem indice eh um endereco de mem
    int *ptr = arr;

    printf("\n \n -------- \n");

    for(int i=0; i<3; i++){
        // printf("[%d] ", ptr+i); // Exibe enderecos
        printf("[%d] ", *(ptr+i));
    }

    printf("\n \n ---- \n");
    return 0;
}
