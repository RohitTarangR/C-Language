#include<stdio.h>
#include<conio.h>

int main ()

{
    int celcius,farenheit;

    printf("Enter the Value in Celcius Format :- ");
    scanf("%d",&celcius);


    farenheit = (1.8*celcius)+32;
    printf("Value converted celcius to farenheit format :- %d",farenheit);

    return 0;
}