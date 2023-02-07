#include<stdio.h>
#include<conio.h>

int main ()

{
    int a1,a2;

    printf("Enter the Number called a1 :- ",a1);
    scanf("%d",&a1);

    printf("Enter the Number called a2 :- ",a2);
    scanf("%d",&a2);

    if(a1>a2)
    {
        printf("Maximum Number is :- %d",a1);
    }   
    else
    {
        printf("Maximum Number is :- %d",a2);
    }

    return 0;
}