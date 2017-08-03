#include <stdio.h>

void test(int p1[10], int p2) {
    int l1;
    int l2[10];

    printf("params are at %ld and %ld\n", (long)&p1, (long)&p2);
    printf("locals are at %ld and %ld\n", (long)&l1, (long)&l2[0]);
}


int main(void) {
    test(5, 10);
}
