#include <stdio.h>

int main ()
{
    int n1;
    float f1;
    char ch;



    printf ("Enter the float value: ");
    scanf("%f" , &f1 );

    printf ("Enter the integer value: ");
    scanf("%d" , &n1);

    fflush(stdin);

    printf ("Enter the character  value: ");
    scanf("%c" , &ch );


    printf("Floating value: %.2f\n", f1);
    printf("integer value: %d\n", n1);
    printf("Character value: %c\n", ch);

    return 0;

}
