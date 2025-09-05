#include<stdio.h>
#include<math.h>
int main(){
 struct point {
    float x;
    float y ;
 };
{ struct point p1,p2 ;
    printf("x1 = ");
    scanf("%f",&p1.x);
    printf("y1 = ");
    scanf("%f",&p1.y);
    printf("x2 = ");
    scanf("%f",&p2.x);
    printf("y2 = ");
    scanf("%f",&p2.y);

    float disx = p2.x-p1.x ;
    float disy = p2.y - p1.y ;
    float disall = sqrt((disx * disx)+ (disy*disy));

    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %.3f units(s)",p1.x,p1.y,p2.x,p2.y,disall);
}
 return 0;

}