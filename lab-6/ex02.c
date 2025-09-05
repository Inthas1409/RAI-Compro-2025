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
   
    

    int max = 0;
    for (int i=1;i<3;i++) {
        if (students[i].score > students[max].score) max = i;
    }
    printf("The highest scores belongs to %s at %.2f scores!\n",
           students[max].name, students[max].score);
    return 0;
}