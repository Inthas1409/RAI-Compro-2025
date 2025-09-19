#include <stdio.h>
#include <math.h>

int SumSq(int a, int b) {
    return pow(a, 2) + pow(b, 2);
}

int main() {
    int f,l;
    printf("Enter two integers: ");
    scanf("%d %d", &f, &l);

    printf("Sum of squares of %d and %d is %d\n", f, l, SumSq(f, l));
    return 0;
}