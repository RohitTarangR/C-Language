#include<stdio.h>
#include<conio.h>

int main ()

{
    int num;

    printf("Enter the Value that you want to check :- ");
    scanf("%d",num);

    if (num > 0)        
    {
        printf("Given Value is 'Positive'.");
    }
    else if (num == 0)
    {
        printf("Given value is 'Zero'.");
    }
    else
    {
        printf("Given value is 'Negative'.");
    }

    return 0;
}