#include<stdio.h>
#include<conio.h>

int main ()

{
    int num;

    printf("Enter the Number :- ",num);
    scanf("%d",&num);

    if(num > 0)
    {
        printf("Number is Positive",num);
    }
    else
    {
    printf("Number is Negative",num);
    }

return 0;
}