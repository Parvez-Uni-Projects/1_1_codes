//if a number 972 is entered through the keyboard, your program should print “Nine Seven Two”. Write the program such that it does this for any positive integers
#include <stdio.h>
int main()
{
    int num,digit,rev=0;

    printf("Enter a number ");
    scanf("%d",&num);
    for(;num!=0;)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num/=10;
    }
    for(;rev!=0;)
    {
        digit=rev%10;
        rev/=10;

        switch (digit)
        {
        case 0:
            printf("zero\t");
            break;
            case 1:
            printf("one\t");
            break;
            case 2:
            printf("two\t");
            break;
            case 3:
            printf("three\t");
            break;
            case 4:
            printf("four\t");
            break;
            case 5:
            printf("five\t");
            break;
            case 6:
            printf("six\t");
            break;
            case 7:
            printf("seven\t");
            break;
            case 8:
            printf("eight\t");
            break;
            case 9:
            printf("nine\t");
            break; 
        default:
            break;
        }
    }

}