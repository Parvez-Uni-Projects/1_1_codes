#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0,counter=0; //declaring the variables for finding

    char str[100],sub_str[50]; //the string for the strings

    printf("Enter the String \n"); // taking the main string input bluff          bluff
    gets(str);

    printf("Enter the Sub-string\n"); //taking the sub string input
    gets(sub_str);

        while(str[i] != '\0' )  //checking till the the end of the string
        {
            if( str[i] != sub_str[j] ) 
                
                i++;  //if the ASCII value don't matches  
            
            else if( str[i] == sub_str[j]) // if the ASCII value matches
            {

                while( sub_str[j]!=  '\0') //checking till the end of the sub string
                {
                            if(str[i]==sub_str[j]) //if matches increasing the value of both index
                            {
                                i++;
                                j++;
                                counter = 1;
                            }

                            else               //if doesn't match settign the value of c to 0 as a flag and breaking the loop
                            {
                                counter=0;
                                break;
                            }
                }
            }
        }


    if(counter)   printf("\nfound\n");
    else             printf("\nnot found");


    return 0;

}
