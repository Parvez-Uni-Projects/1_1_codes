#include <stdio.h>
int perfect(int);
int minPerfect(int);
int maxPerfect(int);
int closest(int);
int main()
{
    int num;
    printf("Enter an integer value ");
    scanf("%d",&num);
    if (perfect(num)==num)
        printf("%d is armstrong",num);
    else  
            printf("closest armstrong %d",closest(num)); 
}
int perfect (int x)
{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    if(sum==x)
        return x;
    else
        return 0;
}
int maxPerfect(int num)
{
    for(  ;num>=1 ;num++)
     {
         if(perfect(num)==num)
         {  
            return num;
            break;  
         }        
     }
}
int minPerfect(int num)
{
    for(  ;num>=1 ;num--)
     {
         if(perfect(num)==num)
         {  
            return num;
            break;  
         }        
     }
}
int closest(int num)
{   
    if((num-minPerfect(num))>(maxPerfect(num)-num))
            return maxPerfect(num);
    else
            return minPerfect(num);
}