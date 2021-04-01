#include <stdio.h>
#include <string.h>

void main()
{
    char a[100],b[100],c[100];
    int i,length=0;
    printf("Enter the string ");
    gets(a);
    //i=strlen(0);
    for(i=0;a[i]!='\0';i++)
        length++;

        for(i=0;a[i]!="\0";i++) //string rev 
            {
                b[i]=a[length-1-i];
            }

            for(i=0;a[i]!="\0";i++) //string cpy
            {
                c[i]=a[i];
            }


    strcpy(b,a);
    strrev(b);

    printf("String length is %d\n",length);
    puts(a);
    puts(b);
}