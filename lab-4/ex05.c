#include <stdio.h>

int main() {
    int num,count ;
    int fact = 1 ;


        printf("Enter a number :  " );
        scanf("%d", &num);
    
    for (int count = 1; count <= num ; count ++) {
    
        fact = fact * count ;
             
      }
      printf("Factorial of %d is %d",num,fact);
      
     

    return 0;
}