#include <stdio.h>

int SumEv(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}
int Sumodd(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++){
        printf("Input: ");
        scanf("%d", &numbers[i]);
    }

    printf("Output: Sum of even number: %d\n", SumEv(numbers, n));
    printf("        Sum of odd number: %d\n", Sumodd(numbers, n));

    return 0;
}

