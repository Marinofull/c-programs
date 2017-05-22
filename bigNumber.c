#include <stdio.h>
#include <stdlib.h>

//to 1000 digits is required 416 bytes

int main ()
{
    long *big;
    big = (long*)(malloc(sizeof(416)));

    do{
        scanf("%ld", big);
        printf("%ld\n", *big);
        //int i;
        //for(;)
    }while(*big);

    return 0;
}
