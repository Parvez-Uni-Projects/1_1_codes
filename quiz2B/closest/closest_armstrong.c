#include <stdio.h>
int armstrong(int);
int power1(int ,int);
int minarmStrong(int);
int maxarmStrong(int);
int main()
{
    int num;
    printf("Enter an integer number");
    scanf("%d",&num);
    if (armstrong(num)==num)
        printf("%d is a armstrong number",num);
    else
    {   
        int minarmstrong=minarmStrong(num);
        int maxarmstrong=maxarmStrong(num);
        if((num-minarmstrong)>(maxarmstrong-num))
            printf("The closest armstrong number is %d",maxarmstrong);
        else
            printf("The closest armstrong number is %d",minarmstrong);
    }   
}
int armstrong (int x)
{
    int i=0,digit,sum=0,input;
    input=x;
    for(;x>0;)
    {
        i++;
        x/=10;
    }
    x=input;
    for(;x>0;)
    {
        digit=x%10;
        x/=10;
        sum+=power1(digit,i);
    }
    return sum;
}
int power1(int x , int n)
{
    int power=1,i;
    for (i=1;i<=n;i++)
    {
        power*=x;
    }
    return power;
}
int maxarmStrong(int num)
{
    for(  ;num>=1 ;num++)
     {
         if(armstrong(num)==num)
         {  
            return num;
            break;  
         }        
     }
}
int minarmStrong(int num)
{
    for(  ;num>=1 ;num--)
     {
         if(armstrong(num)==num)
         {  
            return num;
            break;  
         }        
     }
}