#include <stdio.h>
#include <string.h>

int main(void) {

    char name[] = "John Smith";
    char name2[] = "John Smith";
    int name_size = strlen(name);
    int cmp_result = strncmp(name, name2, 10);

    printf("Hi, I am %s\n", name);
    printf("My name is %i characters long\n", name_size);
    printf("Comparison result: %i\n", cmp_result);

    return 0;
}