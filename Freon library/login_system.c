
#include<stdio.h>

int main ()
{
    int user_name,password,login_reg,user_name2,password2;
    
    printf("Type 1 for log in & 2 for registration : ");
    scanf("%d",&login_reg);

    printf("Enter the user name :  ");
    scanf("%d",&user_name);

    printf("Enter the password :  ");
    scanf("%d",&password);

    printf("Type 1 for log in & 2 for registration : ");
    scanf("%d",&login_reg);

    if(login_reg)
    {
                printf("Enter the user name :  ");
                scanf("%d",&user_name2);

                printf("Enter the password :  ");
                scanf("%d",&password2);

                if(user_name2==user_name  && password2==password)
                    printf("He he boi welcome to the pinik world");

                else
                    printf("pehli fursat me nikal sala");
    }
    else
    {
        printf("register koros nai ken shala ?");
    }
    
}