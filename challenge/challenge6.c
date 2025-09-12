#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 4

struct Student {
    char name[21];
    int id;
    int grades[NUM_SUBJECTS];
    float average;
};

int main() {
    struct Student students[NUM_STUDENTS];
    char subjects[NUM_SUBJECTS][10] = {"Math", "English", "Science", "History"};
    int subjectTotals[NUM_SUBJECTS] = {0};
    float subjectAverages[NUM_SUBJECTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name (no spaces), ID, and 4 grades for student %d:\n", i + 1);
        scanf("%s %d %d %d %d %d", 
              students[i].name, 
              &students[i].id, 
              &students[i].grades[0], 
              &students[i].grades[1], 
              &students[i].grades[2], 
              &students[i].grades[3]);

        int sum = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            sum += students[i].grades[j];
            subjectTotals[j] += students[i].grades[j];
        }
        students[i].average = sum / (float)NUM_SUBJECTS;
    }

    printf("\nStudent Averages:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %s (ID: %d): %.2f\n", 
               students[i].name, 
               students[i].id, 
               students[i].average);
    }

    int topStudentIndex = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].average > students[topStudentIndex].average) {
            topStudentIndex = i;
        }
    }

    printf("\nTop Student: %s with %.2f\n", 
           students[topStudentIndex].name, 
           students[topStudentIndex].average);

    printf("\nSubject Averages:\n");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        subjectAverages[j] = subjectTotals[j] / (float)NUM_STUDENTS;
        printf("%s: %.2f\n", subjects[j], subjectAverages[j]);
    }

    int topSubjectIndex = 0;
    for (int j = 1; j < NUM_SUBJECTS; j++) {
        if (subjectAverages[j] > subjectAverages[topSubjectIndex]) {
            topSubjectIndex = j;
        }
    }

    printf("\nTop Subject: %s with average %.2f\n", 
           subjects[topSubjectIndex], 
           subjectAverages[topSubjectIndex]);

    return 0;
}
