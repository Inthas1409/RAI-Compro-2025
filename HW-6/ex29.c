#include <stdio.h>

struct profile {
    char name[30];
    float salary;
};

int main() {
    struct profile a[] = {
        {"John", 3000},
        {"Tiger", 2000},
        {"Lisa", 5000}
    };
    return 0;
}