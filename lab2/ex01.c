#include<stdio.h>

int main()
{

        int inti ;
        float point;
        char car ;

        printf("Please enter an interger value :");
        scanf("%d",&inti);
        printf("You entered:%d",inti);

        printf("Please enter a float value:");
        scanf("%f",&point);
        printf("You entered:%.1f",point);

        printf("Please enter a character :");
        scanf("%s",&car);
        printf("You entered : %c", car);
        
        return 0;
}