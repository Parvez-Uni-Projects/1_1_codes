//Write a C program to convert a small letter into capital letter and vice versa.
#include <stdio.h>
int main ()
{
    char ch;
    int as,vv;

    printf("Enter a capital or small character ");
    scanf("%c",&ch);
    as= (int)ch;
    if(as>=97 && as<=122)
    {
        vv=as-32;
        printf("The capital letter is : %c",(char)vv);

    }
    else if(as>=65 && as<=90)
    {
        vv=as+32;
        printf("The small letter is : %c",(char)vv);
    }
    else
    {
        printf("Enter a valid value");
    }
   /* if(ch>='z'&&ch<='a');
    {
        printf("");
    }*/ 
}