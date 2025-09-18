
#include <stdio.h>

struct S {
    int a, b, sum;
};

int main() {
    struct S s;
    struct S *p = &s;

    p->a = 5;
    p->b = 8;
    p->sum = p->a + p->b;

    printf("First number  = %d\n", p->a);
    printf("Second number = %d\n", p->b);
    printf("Summation     = %d\n", p->sum);

    return 0;
}
