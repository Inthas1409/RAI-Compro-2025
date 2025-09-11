#include <stdio.h>

int main() {
    char l[3][3];  
    int a_str;    
    printf("Total size = %lu bytes\n", sizeof(l) + sizeof(a_str));
    return 0;
}