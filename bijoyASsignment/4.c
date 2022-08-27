// Write a program containing a function which takes a string and a chracter as argument and returns 1 if the character is found in the string , otherwise return 0 . The string and the character should be taken as user input

#include <stdio.h>
#include <string.h>

int is_available(char str[], char ch)
{
    int exists = 0;
    for (int i = 0 ;i < strlen(str);i++) // loping until the lenght of the str
    {
        if (str[i] == ch) //if found breaking the loop and returning 1
        {
            exists = 1;
            break;
        }
    }

    
    return exists;
}
int main()
{
   char str[100], ch;

    printf("Enter the String :  "); // taking string input
    scanf("%s", &str);
    printf("Enter the Character to searched for  :  "); // taking character input
    scanf(" %c", &ch);

    int exists = 0;
    exists = is_available(str, ch); // passing string and cahracter  as argument
    printf("The result is  %d", exists);

    return 0;
}