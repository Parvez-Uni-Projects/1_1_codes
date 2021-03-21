
/*Name	Quiz-1 (out of 5)	Quiz-2 (out of 5)	Quiz-3 (out of 5)	Quiz-4 (out of 5)	Quiz-5 (out of 5)	Assignment - 1 (out of 5)	Assignment - 2 (out of 5)	Assignment - 3 (out of 5)	Mid (out of 30)	Final (out of 50)	Lab (out of 25)
Samiha	1	5	0	1	4	2	5	4	12	15	12
Sultana	5	4	0	5	4	5	4	1	15	48	25
Juamana	4	3	1	2	4	0	1	4	15	15	17
Fattah	3	2	1	4	4	1	0	1	13	44	15
Sadi	2	5	0	1	5	2	2	1	28	18	15
Zaifan	2	4	3	4	1	2	1	2	30	18	16
Bijoy	1	1	5	5	0	4	3	0	26	37	20
Fuad	2	0	3	0	0	1	4	4	12	28	8
Amir	4	5	1	3	0	3	3	5	7	2	11
Anne	4	0	1	3	1	2	4	5	8	3	19


Tasks: 
1)	a) Create a table in excel with the given values.  
b) Give a heading for the given table above stating “CSE1108 GRADE SHEET”. Make sure it is center aligned, and bold. 
c) Make the heading of each of the columns bold, and color these boxes light blue, and ensure that they are center aligned. 
2)	a) Find the average of the 3 assignments and round it to 2 decimal places for each of the students. 
b) Find the total of the best four quizzes for each of the students. 
 (Hint: You have to find the best 4 quizzes and then sum them)
3)	Convert the marks of midterm out of 20 and also the marks of final exam out of 30. Round them to 2 decimal places.

4)	You have to sum the marks and calculate the total out of 100.  If the values are fractional then round up the values to the nearest large integer.  (Total = Total of best 4 quizzes + Average of Assignments + Mid (out of 20) + Final (out of 30) + Lab)
 Example: 
67.57 will be 68.  
55.10 will be 56.  
5)	Color the final marks according to the following distinctions: 
>= 90 color it by green 
>= 80 color it by orange
>=70 color it by yellow 
>= 60 color it by purple 
>= 50 color it by blue
< 50 color it by red
6)	 Make a column for representing the grades obtained. If the total mark is:
	>=90 give Grade A beside it
	>=80 give Grade B beside it
	>=70 give Grade C beside it
	>=60 give Grade D beside it
	>=50 give Grade E beside it
	<50 give Grade F beside it

7)	The university requires that the students who got a Grade F or got less than 25 out of 50 in the finals must repeat the course. Create another column to find out which students must repeat CSE1108, and write “REPEAT” in that column, otherwise leave the cell blank.  

8)	Now, find out what percentage of the students obtained which grade. You will display this in a pie chart and a bar chart.
Follow the steps:
●	 In the same sheet, below the table of CSE1108 GRADE SHEET (say about 4 rows below), generate a small table with 2 columns (Grades and Counts). Give a header “For Charts”.
●	In the Grade’s column, write all the grades from A-F. Then, for the Counts column, use a COUNTIF function to find the number of students who got the grade corresponding to the left cell.
●	You have to divide the value from the COUNTIF function with the number of students. Then, convert it into percentages.
●	Then, use this table to generate your charts.

*/
 
 #include <stdio.h>

 int main ()
  {
      int q,qq,qqq,qqqq,qqqqq,as,ass,asss,mid,final,lab,sum,avass,mid20,final30,sumq,total; //declaring the values
      
        printf ("Enter the number of the number of 5 quiz: ");
        scanf ("%d%d%d%d%d",&q,&qq,&qqq,&qqqq,&qqqqq);

        printf ("Enter the number of the three Assignment: ");
        scanf ("%d%d%d",&as,&ass,&asss);

        printf ("Enter the number of Mid exam : ");
        scanf ("%d",&mid);

        printf ("Enter the number of Final exam : ");
        scanf ("%d",&final);

        printf ("Enter the number of Lab exam : ");
        scanf ("%d",&lab);

      sumq=q+qq+qqq+qqqq+qqqqq;
     //finding the avarage of the assignments
     if (as<=5 && ass<=5 && asss<=5)
     {
         avass=(as+ass+asss)/3;
         printf(" Avarage of the assignments :%.2f\n",(float)avass);
     }
     else
     {
         printf("on the assignment mark is greater than 5\n");
     } 
    //finding the mark of mid out of 20 ,20/30=.66 (A little bit miscalculation)
    if (mid<=30)
    {
        mid20=mid*.66;
        printf("Midterm mark out of 20: %.2f\n",(float)mid20);
    }
    else
    {
        printf("The midtem mark you provided is greater than 30\n");
    }
    //finding the marks of final out of 50 ,30/50=.6 
    if (final<=50)
    {
        final30=final*.6;
        printf("Final mark out of 30: %.2f\n",(float)final30);
    }
    else
    {
        printf("The Final mark you provided is greater than 50\n");
    }
    
    total=(avass+sumq+final30+mid20+lab);
    printf("The total number out of 100 is = %.2f",(float)total);
    if(total>=90 && total<=100)
    { 
       printf("The grade is A");
    } 
    else if (total>=80)
    {
       printf("The grade is B");
    }
    else if (total>=70)
    {
       printf("The grade is C");
    }
    else if (total>=60)
    {
       printf("The grade is D");
    }
    else if (total>=50)
    {
       printf("The grade is E");
    }
    else if (total<50&& total>=0)
    {
       printf("The grade is F");
       
    } 
    if (total<50 ||final<25)
    {
        printf("You Need to take a repeat!!");
    }
    else
    {
        printf("You are ready to go to next semester");
    }

     // printf("First quiz number is : %d",q);
  }

