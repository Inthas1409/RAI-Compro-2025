#include<stdio.h>
int main() {
    float num1, num2, result;
    int choice;

    printf("Enter Num1: ");
    scanf("%f", &num1);
    printf("Enter Num2: ");
    scanf("%f", &num2);

    printf("\nCalculator Menu:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");

    printf("Choose menu: ");
    scanf("%d", &choice);

    switch (choice) {
           case 1:
            result = num1 + num2;
            printf("Ans : Num1 + Num2 = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Ans : Num1 - Num2 = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Ans : Num1 * Num2 = %.2f\n", result);
            break;
        case 4:
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero\n");
                return 0;
            }
            printf("Ans : Num1 / Num2 = %.2f\n", result);
            break;
        case 5:
            if ((int)num2 != 0)
                result = (int)num1 % (int)num2;
            else {
                printf("Error: Division by zero\n");
                return 0;
            }
            printf("Ans : Num1 %% Num2 = %.0f\n", result);
            break;
        default:
            printf("Invalid menu choice\n");
        return 0;
    }
}
