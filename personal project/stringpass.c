#include <stdio.h>
#include <string.h>

void pass(char  *ptr)
{
    //printf("\nThe string is :%s",ptr);
    puts(ptr);
}


int main ()
{
    char str1[9][2];

    for (int i=0 ; i<3 ;i++)
    {
        printf("%d no  string ",i+1);
            gets(str1[i]);
    }

    for (int i=0 ; i<3 ;i++)  pass(str1[i]);
        

             return 0;  
}

