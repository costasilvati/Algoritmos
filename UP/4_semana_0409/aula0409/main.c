#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digitado, n1, n2, n3;

    printf("Digite o numero 1\n");
    scanf("%d", &n1);
    printf("Digite o numero 2\n");
    scanf("%d", &n2);
    printf("Digite o numero 3\n");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
        if(n2 < n3){
            printf("%d - %d - ", n2,n3); \iv
        }
        printf("%d", n1);

    }else if(n2 > n1 && n2 > n3){
        printf("%d - ", n2);
    }else{
        printf("%d - ", n3);
    }

    return 0;
}
