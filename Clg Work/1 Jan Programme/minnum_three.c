#include<stdio.h>
#include<conio.h>

int main ()
{

int a,b,c;

printf("Enter the Num1 :- ",a);
scanf("%d",&a);

printf("Enter the Num2 :- ",b);
scanf("%d",&b);

printf("Enter the Num3 :- ",c);
scanf("%d",&c);

if ( a <= b && b <= c ) 
{ 
printf (" %d is the smallest number of all. ", a); 
} 
else if ( b <= a && b <= c) 
{ 
printf (" %d is the smallest number of all. ", b); 
} 
else 
{ 
 printf ( " %d is the smallest number of all. ", c); 
} 
return 0;
}
