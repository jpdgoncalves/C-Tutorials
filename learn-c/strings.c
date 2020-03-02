#include <stdio.h>
#include <string.h>

int main(void) {

    char name[] = "John Smith";
    int name_size = strlen(name);

    printf("Hi, I am %s\n", name);
    printf("My name is %i characters long\n", name_size);

    return 0;
}