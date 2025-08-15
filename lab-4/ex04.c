#include<stdio.h>
int main()
{
    int num,mul1;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Multiplication table\n");
    for (mul1=1;mul1<=12;mul1++)
    {
        printf("%4d * %-2d = %-3d\n",num,mul1,num*mul1);
    }

    return(0);
    
}