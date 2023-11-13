#include <stdio.h>

void main(){
    int x = 10;
    int *p;
    p = &x;

    printf("Value of x \t: %d\n", x);
    printf("Address of x \t: %d\n", &x);
    printf("Value of p \t: %d\n", p);
    printf("Content of p \t: %d\n", *p);
    printf("Address of p \t: %d\n", &p);
}
