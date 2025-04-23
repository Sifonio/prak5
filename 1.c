#include <stdio.h>

int a = 0;

int myFyn() {
    return a++;
}

int main() {
    printf("%d %d %d\n", myFyn(), myFyn(), myFyn());
    return 0;
}
//gcc -Wall 1.c -o 1