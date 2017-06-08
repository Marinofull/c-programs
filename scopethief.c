#include <stdio.h>
#include <stdlib.h>

void thief(){
    int *c = NULL, b = 9;
    // 'c' comes above 'b' in the inverted stack cuz it is a long type, which has priority than int type

    //printf("c are in %ld storing %ld\n", (long)&c, 0);
    //printf("b are in %ld storing %ld\n", (long)&b, b);
    //for(c = &b; b > 0; b--, c++)
    //    printf("c points to %ld storing %ld\n", (long)c, *c);
    //printf("c points to %ld storing %ld\n", (long)c, *c);
    c = &b + 2*sizeof(int) + 1;
    //printf("%d\n", *c);
    *c = *(c+1);
    //printf("%d\n", *c);
}

int main() {
    int a,b;
    //'b' comes above 'a' in the inverted stack, if they are the same type

    scanf("%ld %ld", &a, &b);
    //printf("a are in %ld storing %d\n", (long)&a, a);
    //printf("b are in %ld storing %d\n", (long)&b, b);
    thief();
    printf("a now stores %ld\n", a);

    return 0;
}
