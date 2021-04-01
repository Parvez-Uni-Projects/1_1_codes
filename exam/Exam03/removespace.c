#include <stdio.h>
#include <string.h>
void main()
{
    char input[100];
    int i = 0,j,len ;
    gets(input);

    len=strlen(input);

    for(i=0;i<len;)
    {
        if(input[i]==' ' && (input[i+1]==' ' || input[i-1]==' '))
        {
            for(j=i;j<len;j++)
            input[j]=input[j+1];
            len--;
        }
        else
        {
            i++;
        }
    }
    printf("%s\n",input);
    printf("\n");
}