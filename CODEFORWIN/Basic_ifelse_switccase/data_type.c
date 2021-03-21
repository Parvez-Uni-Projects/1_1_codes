#include <stdio.h>

int main ()
{
    int n1;
    float f1;
    char ch;

    //n1=4;
    //n2=5;

    printf ("Enter the integer value");
    scanf("%d" , &ch );
    printf ("Enter the float value");
    scanf("%f" , &n1 );
    printf ("Enter the character  value");
    scanf("%c" , &f1 );

    printf("Character value: %c\n" ,ch);
    printf("integer value: %d\n",n1);
    printf("Floating value: %.2f\n", f1);

    return 0 ;
}
