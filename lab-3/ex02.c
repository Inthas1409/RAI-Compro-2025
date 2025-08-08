#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);
    if (num < 1 || num > 100) {
        printf("Number is out of range.\n");
    }
    else {
        if (num % 2 == 0) {
            printf("%d The number is even.\n",num);
        }
        else {
            printf("%d The number is odd.\n",num);
        }
    }
    return 0;
}