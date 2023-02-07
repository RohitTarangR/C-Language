#include<stdio.h>
#include<conio.h>

int main ()

{
    float area,pie,radius;

    pie = 3.14;

    printf("Enter the Value of Radius :- ");
    scanf("%f",&radius);

    area = pie*radius*radius;

    printf("Area of Circle:- %f",area); 

    return 0;
}