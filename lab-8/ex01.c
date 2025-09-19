#include<stdio.h>
#include<math.h>
#define Pi 3.14

float calCir(float r){
    return 2* Pi * r;
}
float calArea(float r){
    return Pi * r * r ;
}
int main()
{   
    float radius;
    printf("Enter the radius in cm:");
    scanf("%f",&radius);

    printf("Circumference:%0.2f\n",calCir(radius));
    printf("Area:%0.2f\n",calArea(radius));

    return 0;
}
