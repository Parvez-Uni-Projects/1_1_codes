#include <stdio.h>

#include <string.h>

int main ()
{
    
    char str1[100] ,str2[100];

    int max_length;
    
    printf("Enter the 1st  String \n");
    gets(str1);

    printf("Enter the 2nd  String \n");
    gets(str2);

    
    int str1_length;      
    for ( str1_length =0 ; str1[str1_length] != '\0' ; ++str1_length);   
    
    //printf("The length is %d",str1_length);

 
    int str2_length;
    for ( str2_length =0 ; str2[str2_length] != '\0' ; str2_length++ );
    

    if (str1_length > str2_length ) max_length =str1_length ; 
    else                            max_length =str2_length ;  


    int compare_value;

    for (int i = 0 ; i <max_length ; i++)
    {
        if ( str1[i]  == str2 [i]  || str1[i] == str2[i] + 32 ||  str1[i] == str2[i] - 32)
        {
            compare_value = 1;
        }

        else 
        {
            compare_value = 0;
            break;
        }
    }

    if (compare_value) printf("Same\n");
    else               printf("Not Same\n");

    return 0;
    
}