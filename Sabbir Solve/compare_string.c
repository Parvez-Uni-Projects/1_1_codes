#include<stdio.h>
#include<string.h>

int main()
{
    int max_length , c=0 ; //declaring the variables for finding

    char str1[100],str2[50]; //the string for the strings

    printf("Enter the 1st  String \n"); //taking the main string input
    gets(str1);

    printf("Enter the 2nd string\n"); //taking the sub string input
    gets(str2);

    int compare_value = strcmp(str1,str2); //strcmp will return 0 if the string matches


    int i ;
    for ( i =0 ; str1[i] != '\0' ; i++); //finding out the lengths of the string
    int str1_length = i ;

    int j ;
    for ( j =0 ; str2[j] != '\0' ; j++);
    int str2_length = j ;



    if (str1_length > str2_length ) max_length =str1_length ;  //finding out the max length
    else                            max_length =str2_length ;  



    if ( compare_value == 0 )                   printf("Same"); //here using not statement to get a non zero value


    else if (str1_length != str2_length ) printf("Not Same\n"); //length dont match not same


    else if ( compare_value != 0  && str1_length == str2_length) //if string don't match and the length is same
               {
                       for ( int i =0 ; i < max_length ; i ++)  //matching the indexes if matches setting the value of c to 1
                       {
                           if ( str1[i] == str2 [i] || str1[i] == str2[i] + 32 ||  str1[i] == str2[i] - 32  )  // Hello hell0  
                            {
                                c = 1;  
                            }

                           else 
                           {
                               c = 0;  // if the value doesn't match breaking the loop
                               break;

                           }  
                       }

                    if (c)            printf("Same\n");
                    else if (c == 0)  printf("Not Same\n");
               }         
                        

    return 0;


}
    