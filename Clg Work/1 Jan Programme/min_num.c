#include<stdio.h>
#include<conio.h>

int main ()

{
    int num1,num2;

    printf("Enter the Number :- ",num1);
    scanf("%d",&num1);

    printf("Enter the Number :- ",num2);
    scanf("%d",&num2);

    if(num1<num2)
    {
        printf("Minimum Number is :- %d",num1);
    }
    else
    {
        printf("Minimum Number is :- %d",num2);
    }

return 0;
}