#include <stdio.h>
#include <stdlib.h>

#define NUM 50
#define MUN 3

void thief(){
    //code here
    int b = MUN, *c;

    for(c = &b; *c != NUM; c++){
        printf("c points to %ld storing %d\n", (long)c, *c);
    }
    *c = b;
}
//Make the print prints MUN instead of NUM

int main() {
    int a = NUM;

    thief();
    printf("%d\n", a);

    return 0;
}
