#include <stdio.h>
int main ()
{
    int i,j,total,coursenum;
    float tot_credit=0;

    printf("Enter the total number of course ");
    scanf("%d",&coursenum);

    float credithour[coursenum],grade[coursenum];

    printf("Enter the credit hours and grade obtained ");
    for(i=0;i<coursenum;i++)
    {
        scanf("%f %f",&credithour[i],&grade[i]);
    }

    for (i=0;i <coursenum;i++)
        {
            tot_credit+=credithour[i];
        }
    
    printf("%d",tot_credit);

}