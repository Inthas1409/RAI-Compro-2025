#include<stdio.h>

int main()
{  int array[]={3,1,2,4,5,6};
   int size = 6 ; 
   
  int *point = array ;
  int *p6 = array + size ;
   while (point < p6){
    printf("%d\n",*point);
    point++ ;
   }
return 0 ;
}