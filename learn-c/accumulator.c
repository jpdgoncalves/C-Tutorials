#include <stdio.h>

int accumulate(int n) {
    static int accum = 0;
    accum += n;
    return accum;
}

int main(void) {

    printf("accumulated %i\n", accumulate(4));
    printf("accumulated %i\n", accumulate(5));

    return 0;
}