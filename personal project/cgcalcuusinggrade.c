#include <stdio.h>
int main ()
{
    char coursegrade[9];

    for(int i=0;i<9;i++)
        {
            printf("Enter the %d no 3 credit course grade ",i+1);
                scanf("%c",&coursegrade[i+1]);
            if(i == 5) break;
           
            // else if (i>=5 && i<8)
            // {
            //     printf(" Enter the %d no 1.5 credit course grade \n",i-4);
            //     scanf("%c",&coursegrade[i+1]);   
            // }
            // else if (i>=8 && i<9)
            // {
            //     printf(" Enter the %d no .75 credit course grade \n",i-7);
            //     scanf("%c",&coursegrade[i+1]);   
            // }
        }
        printf("Well done brother :) ");
        return 0;

}
//! The main logic will be ((3*sum of course no 1-5) + (1.5* course no 6-8) + (.75 * course no 8)) / 20.25 
//! We will be storing the sum of each types of courses in different types of arrays  