4.#include<stdio.h>

int main()
{

       char name[50];
       int id ;
       int Programming ;
       float pro,phy,cal,gpa;
      

       printf("Enter your Name:");
       scanf("%s",name);

       printf("Enter your student ID : ");
       scanf("%d",&id);

       printf("Enter your Programming Score");
       scanf("%d",&pro);

       printf("Enter your Physics score");
       scanf("%f", &phy);

       printf("Enter your Calculus score");
       scanf("%f",&cal) ;

       printf("Hi %s(%d)! Your GPA is%.2f",name,id,(pro+phy+cal)/3);
        return 0 ;


        
}