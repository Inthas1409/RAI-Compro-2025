#include<stdio.h>



int main()
{  int array[]={3,1,2,4,5,6};
    int *point ;
    int *p6 = array + 6 ;
    int max = *array ;

    for (point = array + 1 ; point< p6; point ++){
        if(*point > max){
            max = *point ;
        }
    }
printf("Max Value : %d\n",max) ;
    
return 0 ;
}