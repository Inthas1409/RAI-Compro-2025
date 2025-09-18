#include <stdio.h>

int main() {
    int A[3][3];
    int *p = &A[0][0];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            *(p + i*3 + j) = i*3 + j + 1;
        }
    }
    printf("Array 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(p + i*3 + j));
        }
        printf("\n");
    }

    return 0;
}