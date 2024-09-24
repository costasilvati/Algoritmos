#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=100; i<=200; i++){
        if(i%7 == 0){ // se resto da divisao for 0
            printf("%d - ", i);
        }
    }
    return 0;
}
