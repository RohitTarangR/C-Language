#include<stdio.h>
#include<conio.h>

int main ()

{
    int avg,a,b,c,d,e;

    printf("Enter the Value of a :- ");
    scanf("%d",&a);

    printf("Enter the Value of b :- ");
    scanf("%d",&b);

    printf("Enter the Value of c :- ");
    scanf("%d",&c);
    
    printf("Enter the Value of d :- ");
    scanf("%d",&d);

    printf("Enter the Value of e :- ");
    scanf("%d",&e);

    avg=(a+b+c+d+e)/5;

    printf("Average of this numbers is :- %d",avg);

    return 0;

    }