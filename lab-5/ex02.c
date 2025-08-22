#include<stdio.h>
int main()
{
    int num[9] = {1,2,3,4,5,6,7,8,9};
        printf("Reversed Array:");
    for(int i = 8; i > -1; i-- ){
        printf(" %d ",num[i]);
    }
    return 0;
}