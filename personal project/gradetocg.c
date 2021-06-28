#include <stdio.h>
#include <string.h>
float grade_to_point();

int main ()
{
    char str1[9][2];

        printf("1st string ");
            gets(str1[0]);
        

            int len=strlen(str1[0]);
            int val=strcmp(str1[0],"A+");
            grade_to_char(str1[0]);

            // printf("%s val=%d len=%d",str1,val,len);         
}

float grade_to_point(char str1[0])
{
     if         (strcmp(str1[0],"A+") == 0 || strcmp(str1[0],"a+") == 0)  printf("CG = 4.00");    
        else if (strcmp(str1[0],"A")  == 0 || strcmp(str1[0],"a")  == 0)  printf("CG = 3.75");
        else if (strcmp(str1[0],"A-") == 0 || strcmp(str1[0],"a-") == 0)  printf("CG = 3.50");
        else if (strcmp(str1[0],"B+") == 0 || strcmp(str1[0],"b+") == 0)  printf("CG = 3.25");
        else if (strcmp(str1[0],"B")  == 0 || strcmp(str1[0],"b")  == 0)  printf("CG = 3.00");
        else if (strcmp(str1[0],"B-") == 0 || strcmp(str1[0],"b-") == 0)  printf("CG = 2.75");
        else if (strcmp(str1[0],"C+") == 0 || strcmp(str1[0],"c+") == 0)  printf("CG = 2.50");
        else if (strcmp(str1[0],"C")  == 0 || strcmp(str1[0],"c")  == 0)  printf("CG = 2.25");
        else if (strcmp(str1[0],"D")  == 0 || strcmp(str1[0],"d")  == 0)  printf("CG = 2.00");
        else if (strcmp(str1[0],"F")  == 0 || strcmp(str1[0],"f")  == 0)  printf("CG = 0.00");

        return 2.3;
}