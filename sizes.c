#include <stdio.h>

int main ()
{
    printf("int size is: %ld\n", sizeof(int));
    printf("float size is: %ld\n", sizeof(float));
    printf("long size is: %ld\n", sizeof(long));
    printf("double size is: %ld\n", sizeof(double));
    printf("long int size is: %ld\n", sizeof(long int));
    printf("long long size is: %ld\n", sizeof(long long));
    printf("long double size is: %ld\n", sizeof(long double));

    return 0;
}
