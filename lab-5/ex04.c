#include<stdio.h>
int main(){
    int num[10];
    int odd = 0;
    int even = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter value 1:");
        scanf("%d",&num[i]);

        if (num[i]%2 == 0) {
            even++;
        }
            else {
            odd++;
            }
        }
        printf("Even numbers: %d\n",even);
        printf("Odd numbers:%d\n",odd); 
    return 0;
    }
    
