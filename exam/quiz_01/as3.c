#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter numbers...");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c)&&(b>=c))
    {      
            x=x;
            y=y;
            z=z;
            printf("\n Ascending order : %d %d %d",c,b,a);      
    }
    else if((a>=b)&&(a>=c)&&(c>=b))
    {      
           x=x;
           y=z;
           z=y;
            printf("\n Ascending order : %d %d %d",b,c,a);      
    }
    else if((b>=a)&&(b>=c)&&(a>=c))
    {     
           x=y;
           y=x;
           z=z;
            printf("\n Ascending order : %d %d %d",c,a,b);          
    }
    else if((b>=a)&&(b>=c)&&(c>=a))
        {
            x=y;
            y=z;
            z=x;  
            printf("\n Ascending order : %d %d %d",a,c,b);
        }
    else if((c>=a)&&(c>=b)&&(a>=b))
    {   
            x=z;
            y=x;
            z=y;
            printf("\n Ascending order : %d %d %d",b,a,c);
           
    }
    else if((c>=a)&&(c>=b)&&(b>=a))
        {
            x=z;
            y=y;
            z=x;
            printf("\n Ascending order : %d %d %d",a,b,c);
        }
}   
