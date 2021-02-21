#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter numbers...");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c)&&(b>=c))
    {      
            printf("\n Ascending order : %d %d %d",c,b,a);      
    }
    else if((a>=b)&&(a>=c)&&(c>=b))
    {      
            printf("\n Ascending order : %d %d %d",b,c,a);      
    }
    else if((b>=a)&&(b>=c)&&(a>=c))
    {     
            printf("\n Ascending order : %d %d %d",c,a,b);          
    }
    else if((b>=a)&&(b>=c)&&(c>=a))
        {
            printf("\n Ascending order : %d %d %d",a,c,b);
        }
    else if((c>=a)&&(c>=b)&&(a>=b))
    {   
            printf("\n Ascending order : %d %d %d",b,a,c);
           
    }
    else if((c>=a)&&(c>=b)&&(b>=a))
        {
            printf("\n Ascending order : %d %d %d",a,b,c);
        }
}   
