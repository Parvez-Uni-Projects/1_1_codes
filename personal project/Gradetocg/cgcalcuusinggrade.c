#include <stdio.h>
// float grade_conv(char);
int main ()
{
    char coursegrade[9][2];

    for(int i=0;i<9;i++)
        {
            if (i < 5)
            {
                printf("%d no 3.0 credit course grade ",i+1);
               scanf("%9s", coursegrade[i+1]);

            }
           
            else if (i>=5 && i<8)
            {
                printf("%d no 1.5 credit course grade ",i-4);
                scanf("%9s", coursegrade[i+1]);   
            }
            else if (i>=8 && i<9)
            {
                printf("%d no .75 credit course grade ",i-7);
                scanf("%9s", coursegrade[i+1]);   
            }
        }
        printf("Well done brother :) ");
        return 0;

}

// float grade_conv(char grade)
// {
//     if (grade == 'A+' || grade =='a+')
//         return 4;
//     else if (grade == 'A' || grade =='a')
//         return 3.75;
//     else if (grade == 'A-' || grade =='a-')
//         return 3.5;
//     else if (grade == 'B+' || grade =='B+')
//         return 3.25;
//     else if (grade == 'B' || grade =='b')
//         return 3;
//     else if (grade == 'B-' || grade =='b-')
//         return 2.75;
//     else if (grade == 'C+' || grade =='c')
//         return 2.5;
//      else if (grade == 'C' || grade =='c')
//         return 2.25;
//     else if (grade == 'D' || grade =='d')
//         return 2;
//     else if (grade == 'F' || grade =='f')
//         return 0;
// }

//! The main logic will be ((3*sum of course no 1-5) + (1.5* course no 6-8) + (.75 * course no 8)) / 20.25 
//! We will be storing the sum of each types of courses in different types of arrays  