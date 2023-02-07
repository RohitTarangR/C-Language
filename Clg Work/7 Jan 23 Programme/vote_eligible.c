#include<stdio.h>
#include<conio.h>

int main ()

{
    int age;

    printf("Enter your age to know your are eligible for voting :- ",age);
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Your age is %d. Congratulations...!! You are eligible for Voting.",age);
    }
    else
    {
        printf("Your age is %d. Sorry..!! You are not eligible for Voting.",age);
    }
return 0;
}