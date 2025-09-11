#include <stdio.h>

struct product {
    char name[15];
    int count;
    float price;
};

int main() {
    struct product pr1, pr2;

    pr1.name = "Programming";

printf("%s", pr1.name);

return 0;
}