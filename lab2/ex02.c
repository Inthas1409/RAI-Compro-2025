#include<stdio.h>

int main()
{

        int all,mins,hrs;
        
        printf("Please enter total minutes :");
        scanf("%d",&all);

        hrs = all/60 ;
        mins = all % 60;

         printf("%d minutes is %d hrs, and %d mins\n",all,hrs,mins);

        return 0;


    }