#include <stdio.h>
int Prime(int n)
{
    if(n<2)
        return 0;

        for(int i=2;i<n;i++)
        {
            if(n % i == 0)
                return 0;
        }
    return 1;
}
int main()
{
    int first,end;

    printf("Enter the first end numbers:");
    scanf("%d %d",&first,&end);

    printf("The prime numbers within the intervals are:\n");
    for(int i=first;i<=end;i++)
    {
        if(Prime(i))
            printf("%d ",i);
    }
    return 0;
}