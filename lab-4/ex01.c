#include<stdio.h>
int main() {
    int num[10];
    int sum = 0 ;
    float Average = 0 ;
    for (int count = 1; count <= 10; count ++) {
        printf("Enter the value %d here: ", count );
        scanf("%d", &num[count]);

        sum = sum + num[count] ; 
        Average = sum/10.00 ;
      }
      printf("total sum is %d\n",sum);
      printf("Average is %.2f\n",Average);
    


    return 0;
}