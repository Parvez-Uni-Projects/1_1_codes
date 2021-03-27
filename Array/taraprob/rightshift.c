#include <stdio.h>
int main ()
{
    int a[5]={0,1,2,3,4},i,temp;
    int b[5]={5,6,7,8,9},temp1;


    printf("Before shifting \n ");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    printf("\n");
    for(i=0;i<5;i++)
        printf("%d\t",b[i]);

    temp=a[5-1];  
    for(i=5-1;i>0;i--)  //right shifting
    {
        a[i]=a[i-1]; 
    }
    a[0]=temp;

    temp1=b[0];
    for(i=0;i<5-1;i++)
    {
        b[i]=b[i+1]; 
    }
    b[5-1]=temp1;
       

    printf("\nRight shift \n ");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);




    printf("\nLeft shift \n");
    for(i=0;i<5;i++)
        printf("%d\t",b[i]);

    

    return 0;
}