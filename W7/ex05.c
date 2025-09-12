#include<stdio.h>

int main()
{  int array[]={3,1,2,4,5,6};
   int size = 6 ; 
   
  int *point ; 
  int sum=0 ;
   
  for(point=array ; point < array + size ; point++){

    sum += *point ;
  }
  printf("The sum of array is : %d\n",sum);
return 0 ;
}