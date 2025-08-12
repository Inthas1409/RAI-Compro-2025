#include<stdio.h>
int main()
{
    int cal,phy,com;
    char calgrade,phygrade,comgrade;
    float calnumgrade,phynumgrade,comnumgrade;
    float gpa;

    printf("Calculus score = ");
    scanf("%d", &cal);
    printf("Physics score = ");
    scanf("%d", &phy);
    printf("Compro score = ");
    scanf("%d", &com);

    if (cal >= 80) {
        calgrade = 'A';
        calnumgrade = 4.0;
    } else if (cal >= 70) {
        calgrade = 'B';
        calnumgrade = 3.0;
    } else if (cal >= 60) {
        calgrade = 'C';
        calnumgrade = 2.0;
    } else if (cal >= 50) {
        calgrade = 'D';
        calnumgrade = 1.0;
    } else {
        calgrade = 'F';
        calnumgrade = 0.0;
    }

    if (phy >= 80) {
        phygrade = 'A';
        phynumgrade = 4.0;
    } else if (phy >= 70) {
        phygrade = 'B';
        phynumgrade = 3.0;
    } else if (phy >= 60) {
        phygrade = 'C';
        phynumgrade = 2.0;
    } else if (phy >= 50) {
        phygrade = 'D';
        phynumgrade = 1.0;
    } else {
        phygrade = 'F';
        phynumgrade = 0.0;
    }

    if (com >= 80) {
        comgrade = 'A';
        comnumgrade = 4.0;
    } else if (com >= 70) {
        comgrade = 'B';
        comnumgrade = 3.0;
    } else if (com >= 60) {
        comgrade = 'C';
        comnumgrade = 2.0;
    } else if (com >= 50) {
        comgrade = 'D';
        comnumgrade = 1.0;
    } else {
        comgrade = 'F';
        comnumgrade = 0.0;
    }

    gpa = (calnumgrade+phynumgrade+comnumgrade)/3;
printf("\n");
    printf("Subject     Score     Grade     Grade\n");=
    printf("--------------------------------------\n");
    printf("Cal         %d        %c         %.1f\n",cal,calgrade,calnumgrade);
    printf("Physics     %d        %c         %.1f\n",phy,phygrade,phynumgrade);
    printf("Compro      %d        %c         %.1f\n\n",com,comgrade,comnumgrade);
    printf("GPA : %.2f\n",gpa);

    return (0);

}