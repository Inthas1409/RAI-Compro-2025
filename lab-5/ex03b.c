#include <stdio.h>

int main() {
    int marks[5];   // array to store 5 students' marks
    int total = 0, highest = 0;

    // input marks
    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        // add to total
        total += marks[i];

        // check for highest mark
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    // output results
    printf("Total Marks : %d\n", total);
    printf("Highest Marks: %d\n", highest);

    return 0;
}
