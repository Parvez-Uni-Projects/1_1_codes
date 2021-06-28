#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[9][2];
    

   
        printf("1st string ");
            gets(str1[0]);
        

            int len=strlen(str1[0]);
            int val=strcmp(str1[0],"A");

            // printf("%s val=%d len=%d",str1,val,len);

        if (val == 0)
            printf("operation successfull val=%d len=%d",val,len);
        else
            printf("operation failed      val=%d len=%d",val,len);
     
}