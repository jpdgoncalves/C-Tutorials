#include <stdio.h>

int average(int *grades, int size) {
    int total = 0;

    for(int i = 0; i < size; i++) {
        total += grades[i];
    }

    return total / size;
}

int main(void) {

    //First row grades for maths, second row grades for physics
    int grades[2][5] = {
        {3,4,5,6,7},
        {3,4,5,6,7}
    };

    int math_average = average(grades[0], 5);
    int physics_average = average(grades[1], 5);

    printf("Math average is %i\n", math_average);
    printf("Physics average is %i\n", physics_average);

    return 0;
}