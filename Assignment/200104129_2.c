/*A certain grade of steel is graded according to the following conditions:
(i)Hardness must be greater than 60
(ii)Carbon content must be less than 0.7
(iii)Tensile strength must be greater than 5000
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if condition (i) and (ii) are met
Grade is 8 if condition (ii) and (iii) are met
Grade is 7 if condition (i) and (iii) are met
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met
Write  a  program  which  will  require  the  user  to  give  values  of  hardness,  
carbon content  and  tensile  strength  of  the  steel  under  consideration  
and  output  the  grade  of the steel.*/

#include<stdio.h>
int main()
{   
    float hard, carb , tens; //declaring the variables 
    
    printf("Enter the value of Hardness: ");  //taking the hardness value adn storing it into hard
    scanf("%f", &hard);

    printf("Enter the value of Carbon Content: "); //taking the carbon value adn storing it into carb
    scanf("%f", &carb);

    printf("Enter the value of Tensile Strength: ");    //taking the tensile strength value adn storing it into tens
    scanf("%f", &tens);

    if(hard>60 && carb<.7 && tens>5000)   // checking the conditions given in the question
    { 
       printf("The grade is 10");
    } 
    else if (hard>60 && carb<.7 && tens<5000)
    {
       printf("The grade is 9");
    }
    else if (hard<60 && carb<.7 && tens>5000)
    {
       printf("The grade is 8");
    }
    else if (hard>60 && carb>.7 && tens>5000)
    {
       printf("The grade is 7");
    }
    else if (hard>60 || carb<.7 || tens>5000)
    {
       printf("The grade is 6");
    }
    else if (hard<60 && carb>.7 && tens<5000)
    {
       printf("The grade is 5");

    }
    else
    printf("The number is invalid"); //if the value is out of range then this will execute
}