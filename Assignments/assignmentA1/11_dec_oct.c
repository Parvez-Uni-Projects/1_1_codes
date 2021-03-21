//.to print all the ASCII values and their equivalent characters. The ASCII values vary from 0 to 255
#include<stdio.h>
int main()
{
    int i,n=255;
    for(i=0;i<=n;i++)
    {
        printf("ASCII of %d is %c\t",i,(char)i);
    }
}