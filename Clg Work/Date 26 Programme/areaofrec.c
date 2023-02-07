#include<stdio.h>
#include<conio.h>

int main ()

{
    int a,l,b;

    printf("Enter the Value of Lenght :- ");
    scanf("%d",&l);

    printf("Enter the Value of Broad :- ");
    scanf("%d",&b);

    a=l*b;

    printf("Area of Rectangle :- %d",a);

    return 0;
}