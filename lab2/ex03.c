#include<stdio.h>

int main()
{

        int Age ;
        char name[20];
        float height ;
        int weight ;
        char gender ;
        char Educ[20];

        printf("Enter your Name : ") ;
        scanf("%s",name);

        printf("Enter your Age :");
        scanf("%d",&Age);

        printf("Enter your height : ");
        scanf("%f",&height) ;

        printf("Enter your weight : ");
        scanf("%d",&weight) ;

        printf("Enter your gender : ");
        scanf("%s",&gender );

        printf("Enter your Education Qualification : ");
        scanf("%[^n]",Educ) ;

        printf("Name : %s\n",name) ;
        printf("Age : %d\n",Age);
        printf("Gender : %c\n",gender);
        printf("Height : %f\n",height);
        printf("Weight :%d\n",weight);
        printf("Education : %s\n",Educ) ;
        return 0 ;


        
}