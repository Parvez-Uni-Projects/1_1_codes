#include <stdio.h>
int strong(int);
int minStrong(int);
int maxStrong(int);
int fact(int);
int main()
{
    int num;
    printf("Enter an integer value");
    scanf("%d",&num);
    if (strong(num)==num)
        printf("%d is a armstrong number",num);
    else
    {   
        int minstrong=minStrong(num);
        int maxstrong=maxStrong(num);
        if((num-minstrong)>(maxstrong-num))
            printf("The closest armstrong number is %d",maxstrong);
        else
            printf("The closest armstrong number is %d",minstrong);
    }   
}
int strong(int x)
{
    int i=0,digit,sum=0,input; 
    input=x;
    for(;x>0;)
    {
        digit=x%10;
        x/=10;
        sum= sum + fact(digit);
    }
    if (input==sum)
      return input;
    else 
        return 0;
}

int fact(int x)
{
    int f=1,j;
    for(j=1;j<=x;j++)
    {
        f*=j;      
    }
    return f;
}

int maxStrong(int num)
{
    for(  ;num>=1 ;num++)
     {
         if(strong(num)==num)
         {  
            return num;
            break;  
         }        
     }
}
int minStrong(int num)
{
    for(  ;num>=1 ;num--)
     {
         if(strong(num)==num)
         {  
            return num;
            break;  
         }        
     }
}