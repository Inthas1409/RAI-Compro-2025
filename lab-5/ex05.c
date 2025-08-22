#include<stdio.h>
int main() {
    int num[8];
    int small,big;


      for (int i =0; i < 8; i ++){
    printf("Enter number %d :",i+1);
    scanf("%d",&num[i]);

    if ( i == 0) {
        small = big = num[i];
    } else  {
        if (num[i] < small) {
            small = num[i];
        }
        if (num[i] > big) {
            big = num[i];
        }
    }
    }
     printf("Smallest number: %d\n ",small);
     printf("Biggest number: %d ",big);

}