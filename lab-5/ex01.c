#include<stdio.h>
int main()
{
    int num[10];
    for (int i =0 ; i<10; i++){
        printf("Enter the value %d here :",i+1);
        scanf("%d",&num[i]);
    }
    printf("Values in array are:");
    for  (int i =0 ; i<10; i++){
        printf(" %d",num[i]);
        if (i<10){
            printf(",");
        }
    }
}