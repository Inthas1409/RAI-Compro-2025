
#include<stdio.h>
int main()
{
    int count = 0;
    int num;
    int total = 0;
        while (count <= 9)
    {
        printf ("Enter the number%d :",count+1);
        scanf("%d",&num);
        count++;
        total = total+num;
        
    }
printf("Total sum is : %d",total);

return 0;
}