#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    //Para valores entre 1 e 100
    int upper_bound = 100;
    int lower_bound = 1;
    for(int i =0; i<10; i++){
        //int value = rand() % (upper_bound - lower_bound + 1);
        int value = rand() % 100;// idem a linha 11
        printf("%d \n", value);
    }
    return 0;
}
