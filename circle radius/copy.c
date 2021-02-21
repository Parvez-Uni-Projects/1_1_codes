/*

#include <stdio.h>
 int main()
{
int num1, num2, flag_var, i, j;
printf("Enter two range(input integer numbers only):"); 
scanf("%d %d", &num1, &num2); 
printf("Prime numbers from %d and %d are:\n", num1, num2); 
for(i=num1+1; i<num2; ++i) 
{ 
flag_var=0; 
for(j=2; j<=i/2; ++j) 
{ 
if(i%j==0) 
{ 
flag_var=1; 
break;
} 
} 
if(flag_var==0) 
printf("%d\n",i); 
} 
return 0;
}
/*
//Write a program to determine all prime numbers within the range [a ...b]where a&bare input through keyboard.

#include<stdio.h>
int main()
{
    int i,res=1,res1=1,res2=1,x,n,r,res3=1;
    float res4,res5;
    printf("Enter the values of x and n: ");
    scanf("%d%d",&x,&n);
    printf("Enter the value of r [must be less than n]: ");
    scanf("%d",&r);
    for(i=1; i<=n; i++)
    {
        res=res*x;
    }
    for(i=1; i<=n; i++)
    {
        res1=res1*i;
    }
    for(i=1; i<=r; i++)
    {
        res3=res3*i;
    }
    for(i=1; i<=(n-r); i++)
    {
        res2=res2*i;
    }

    res4=(float)res1/(float)res2;
    res5=(float)res1/(float)(res3*res2);
    printf("x^n=%d\nn!=%d\nnCr=%.2f\nnPr=%.2f",res,res1,res5,res4);

    return 0;
}



#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter numbers...");
    scanf("%d%d%d",&a,&b,&c);


    if((x>=y)&&(x>=c)&&(y>=c))
    {      
            x=x;
            y=y;
            z=z;      
    }
    else if((x>=y)&&(x>=c)&&(c>=y))
    {      
           x=x;
           y=z;
           z=y;    
    }
    else if((y>=x)&&(y>=c)&&(x>=c))
    {     
           x=y;
           y=x;
           z=z;        
    }
    else if((y>=x)&&(y>=c)&&(c>=x))
        {
            x=y;
            y=z;
            z=x;  
        }
    else if((c>=x)&&(c>=y)&&(x>=y))
    {   
            x=z;
            y=x;
            z=y;;
           
    }
    else if((c>=x)&&(c>=y)&&(y>=x))
        {
            x=z;
            y=y;
            z=x;
        }
}   



#include<stdio.h>
int main()
{
    int a, b, i, j, flag = 0 ;

    printf("Enter Two Numbers(number!=1) :");
    scanf("%d",&a);
    scanf("%d",&b);

    if(b>a)
    {
        if(a>1)
        {



            for(j=a; j<=b; j++)
            {
                flag = 0;
                for(i=2; i<j; i++)
                {
                    if(j % i==0)
                    {

                        flag=1;
                        break;

                    }
                }

                if(flag != 1)
                    printf("%d\t", j);
            }
        }
    }
}





#include <stdio.h>
int main()
{
int num1, num2, max;
printf("Enter two positive integers: ");
scanf("%d%d", &num1, &num2);
max = (num1 > num2) ? num1 : num2;
for(;;)
{
if(max % num1 == 0 && max % num2 == 0)
{
printf("LCM of %d and %d is %d ", num1, num2, max);
break;
}
max++;
}
return 0;
}

*/

#include <stdio.h>
int main()
{
int num1, num2,num3, max;
printf("Enter two positive integers: ");
scanf("%d%d", &num1, &num2 ,&num3);
max = (num1 > num2) ? num1 : num2;
for(;;)
{
if(max % num1 == 0 && max % num2 == 0 && max%num3==0)
{
printf("LCM of %d and %d is %d ", num1, num2, max);
break;
}
max++;
}
return 0;
}