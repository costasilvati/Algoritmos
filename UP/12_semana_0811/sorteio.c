#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    int upper_bound = 500;
    int lower_bound = 1;
    for(int i =0; i<10; i++){
        //int value = rand() % (upper_bound - lower_bound + 1);
        int value = rand() % 100;// idem a linha 11
        printf("%d \n", value);
    }
    return 0;
}
