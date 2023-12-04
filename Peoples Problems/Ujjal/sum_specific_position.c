#include <stdio.h>
int main ()
{
    int m,n,i,j,count=0,input,sum=0;

    scanf("%d",&n);//storing the main number in n
    input=n;
    scanf("%d",&m);//storing the number of position in m
    int position[m];//declaring the array to store the positions 

    for (i=0;i<m;i++)
        scanf("%d",&position[i]);
    
    for(i=0;n!=0;i++) //creating a for loop for finding the length of the given number
        {   
            n=n/10;
            count++;
        }
    int digit[count];
    for(i=count-1;i>=0;i--)
        {
            digit[i]= input%10 ; //storing the digits in an array
            input=input/10;
        }


    for(i=0;i<m;i++)
        {
            for(j=0;j<count;j++)   //creating a loop that will run till count for searching the digits 
                if(position[i]==j+1)  //checking if the position is matching 
                {
                    sum+=digit[j];  //storing the sum of the specific position in sum
                    //printf("position= %d digit=%d sum=%d\n",j+1,digit[j],sum); //[checking the sum and the digits continiously]
                }
        }

    /*for (i=0;i<count;i++)      //printing the digits in right order here
        printf("%d",digit[i]);*/

    printf("%d",sum);

    return 0; 
}