//145 is a special number, since it satisfies the following relation: 145 = 1! + 4! + 5! = 1+24+120 =145. Now Write a programto print all the numbers of this kind between 1 –10000

#include<stdio.h>
#include <math.h>
int fact(int x){
    int f=1;
    for(int j=1;j<=x;j++){
        f*=j;
    }
    return f;
}
int main ()
{

    int i,num,input,digit,sum=0;

    //printf("Enter e positive number ");
    //scanf("%d",&num);
    num=1;
    input=num;

    for(;num>=0 && num<=1000;)
    {   
        digit=num%10;
        num/=10;
        sum=sum+fact(digit);

            if(input=sum)
            printf("%d\n",input);
            else
            printf("%d\n ",input);
            
        for(;num==sum;)
        {
            sum=0;
            num++;
        }
    } 
    
}
