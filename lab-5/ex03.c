#include<stdio.h>
int main(){
    int num[5];
    int sum = 0 , high = 0;
    for (int i =0; i < 5; i ++){

        printf("Enter the marks of student %d :",i+1);
        scanf("%d",&num[i]);

        sum += num[i];

        if (num[i] > high) {
            high = num[i];
        }
    }
    printf("Total Marks : %d\n",sum);
    printf("Highest marks :%d\n",high);

    return 0;

}