#include<stdio.h>
#include<conio.h>

int main ()

{

    int i,p,r,n;

    printf("Enter the Value of Principle :- ");
    scanf("%d",&p);

    printf("Enter the Value of Rate :- ");
    scanf("%d",&r);

    printf("Enter the Value of Number of Year :- ");
    scanf("%d",&n);

    i=p*r*n/100;

    printf("Amount of Simple Interest :- %d",i);

    return 0;
}