#include <stdio.h>

struct std {
    char  name[100];
    int   age;
    float score;
};

int main() {
    struct std students[3];

    
    for (int i = 0; i < 3; i++) {
        printf("Enter Student %d's name: ", i+1);
        scanf(" %[^\n]",students[i].name); 

        printf("Enter Student %d's age: ", i+1);
        scanf("%d",&students[i].age);

        printf("Enter Student %d's score: ", i + 1);
        scanf("%f",&students[i].score);
    }

    printf("\n");

    for (int i =0; i < 3 ;i++) {
        printf("Student %d name is %s ,age %d score %.1f\n",i+1,students[i].name,students[i].age,students[i].score);
    }
   return 0;
}
    