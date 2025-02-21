#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2] = {{10, 9}, {5, 6}};
    int (*ptr)[2] = arr;

    printf("\n \n -------- \n");

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            // printf("[%d] ", ptr+i); // Exibe enderecos
            printf("[%d] ", *(*(ptr+i)+j));
        }
        printf("\n");
    }

    printf("\n \n ---- \n");
    return 0;
}
