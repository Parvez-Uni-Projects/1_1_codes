#include <stdio.h>
int main ()
{
    int i,size,array[20]={1,2,3,4,5},temp;


    for (i=0;i<6;i++)
        {
            if(i==2)
                {   
                    temp=array[i];
                    array[i]=6;   
                }
            else if(i>=3)
                array[i]=temp;

        }

    for(i=0;i<5;i++)
    printf("%d",array[i]);
}