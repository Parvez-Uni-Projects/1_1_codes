#include <stdio.h>
int strong(int);
int minStrong(int);
int maxStrong(int);
int fact(int);
int closest(int);
int main()
{
    int num;
    printf("Enter an integer value ");
    scanf("%d",&num);
    if (strong(num)==num)
        printf("%d is a armstrong number",num);
    else
        printf("%d is closest armstrong number",closest(num));   
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
int closest(int num)
{   
    if((num-minStrong(num))>(maxStrong(num)-num))
            return maxStrong(num);
    else
            return minStrong(num);
}