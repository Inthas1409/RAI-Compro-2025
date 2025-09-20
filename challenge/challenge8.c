#include <stdio.h>
#include <string.h>

#define MAX 100   
#define NAME_LEN 50

float calculateAverage(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return (float)sum / n;
}
 
int findHighest(int grades[], int n) {
    int highest = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

int findLowest(int grades[], int n) {
    int lowest = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

void printPassed(char names[][NAME_LEN], int grades[], int n) {
    printf("\nStudents who passed (grade >= 60):\n");
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60) {
            printf("- %s (%d)\n", names[i], grades[i]);
        }
    }
}

int main() {
    int n;
    char names[MAX][NAME_LEN];
    int grades[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter grade of %s (0-100): ", names[i]);
        scanf("%d", &grades[i]);
    }

    float avg = calculateAverage(grades, n);
    int highest = findHighest(grades, n);
    int lowest = findLowest(grades, n);

    printf("\n===== Grade Report =====\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);

    printPassed(names, grades, n);

    return 0;
}
