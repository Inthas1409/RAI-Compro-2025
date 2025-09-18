#include <stdio.h>

int main() {
    float x = 3.5, y = 7.2;
    float *px = &x, *py = &y;
    float temp;

    printf("Before swap: x = %.2f, y = %.2f\n", x, y);

    temp = *px;
    *px = *py;
    *py = temp;

    printf("After swap:  x = %.2f, y = %.2f\n", x, y);

    return 0;
}