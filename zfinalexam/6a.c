#include <stdio.h>
#include <stdlib.h>
void main ()
{
    void *i ,p;
    i = (char *)  calloc (1,1);
    i= 'c';
    printf("%c",i);
    free(i);
}