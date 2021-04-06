#include <stdio.h>
int main ()
{
    int i,j,total,coursenum,invalid;
    float tot_credit=0,tot_grade=0,final_grade;

    printf("Enter the total number of course ");
    scanf("%d",&coursenum);

    float credithour[coursenum],grade[coursenum],number[coursenum],quiz[coursenum],attendence[coursenum],final[coursenum];

    for(i=0;i<coursenum;i++)
    {
        printf("Enter course no : %d s credit hours ",i+1);
        scanf("%f",&credithour[i]);

        printf("Enter course no : %d s marks obtained in  30 marksquiz ",i+1);
        scanf("%f",&quiz[i]);

        printf("Enter course no : %d s marks obtained in 10 marks attendence ",i+1);
        scanf("%f",&attendence[i]);

        printf("Enter course no : %d s marks obtained in 60 marks final ",i+1);
        scanf("%f",&final[i]);
    }

    for(i=0;i<coursenum;i++)
        {
            if(quiz[i]>30 ||attendence[i]>10 || final[i] >60 )
                invalid=1;
        }

    for (i=0;i<coursenum;i++)
        number[i]=quiz[i]+attendence[i]+final[i];
  

    for (i=0;i<coursenum;i++)
    {
        if(number[i]>=80 && number[i]<=100)
            grade[i]=4;
        else if (number[i]>=75)
            grade[i]=3.75;
        else if (number[i]>=70)
            grade[i]=3.50;
        else if (number[i]>=65)
            grade[i]=3.25;
        else if (number[i]>=60)
            grade[i]=3;
        else if (number[i]>=55)
            grade[i]=2.75;
        else if (number[i]>=50)
            grade[i]=2.5;
        else if (number[i]>=45)
            grade[i]=2.25;
        else if (number[i]>=40)
            grade[i]=2.0;
        else if (number[i]>=0 && number[i]< 45)
            grade[i]=0;
    }


    for (i=0;i <coursenum;i++)
    {
            tot_credit+=credithour[i];
            tot_grade+=(credithour[i]*grade[i]);
    }
            
    final_grade=tot_grade/tot_credit;   
    
    if (invalid)
        printf("You have given a invalid input ");
    else
        printf("Your cg is %.2f",final_grade);

}
