#include <stdio.h>
int main()
{
    char ch;
    float n1,n2,res ;
    printf ("Enter choice [+ ,-,*,/]=");
    scanf("%c",&ch);

    switch (ch)
    {
    case '+'/* constant-expression */:
        printf("Enter two value:");
        scanf("%f%f",&n1,&n2);
        res=n1+n2;
        printf ("Result =%f",res);

        /* code */
        break;
    
    default:
        break;
    }
}