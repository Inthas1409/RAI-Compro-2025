#include <stdio.h>
int main()
{
    int vowel=0, alphabet=0,count;
    char letter;

    for(count=0;count<10;count++)
    {
        printf("\nEnter letter a-z : ");
        scanf("\n%c", &letter);
        if((letter=='a')||(letter=='e')||(letter=='o')||(letter=='i')||(letter=='u'))
        vowel++;
    else
        alphabet++;
    }
    printf("\n***Result***\n");
    printf("Vowel(a,e,i,o,u)=%d\n",vowel);
    printf("Other letter    =%d\n",alphabet);

    return 0;
}
