/*If marks obtained by a student in 5 different subjects are input from keyboard, find
out the aggregate marks and percentage marks obtained by the student*/
#include <stdio.h>


int main()
{
    /*int a,b,c,d,e;
    rintf("Input the marks:");
    scanf("%d", &num1);
    return 0;
     int bangla, math, english, science, art, total;
    float percentage;
    printf("Enter the mark bangla: ");
    scanf("%d", &bangla);
    printf("Enter the marks of Math: ");
    scanf("%d", &math);
    printf("Enter the marks of English: ");
    scanf("%d", &english);
    printf("Enter the marks of Science: ");
    scanf("%d", &science);
    printf("Enter the marks of Art: ");
    scanf("%d", &art);
    total = bangla+math+english+science+art;
    percentage = total/5;
    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage); */

    int cse,math,chem,phy,hum ,total,per;
    printf ("Enter five marks ,separated by spaces : ");
    scanf ("%d %d %d %d %d" ,&cse ,&math ,&chem ,&phy ,&hum );
    total=cse+hum+math+chem+phy ;
    per=total/5;

    printf("\n Aggregate Marks : %d" , total);
    printf("\n Percentage : %d",per);

    return 0;



}
