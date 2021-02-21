//Write a C program to input a character and check that it’s a vowel or a consonant.
#include<stdio.h>
int main()
{
    char ch;

    printf("ENter the character : ");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("The character %c is vowel",ch);
    else
    printf("The character %c is consonant",ch);

}