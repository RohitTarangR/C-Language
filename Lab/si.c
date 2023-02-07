#include<stdio.h>

int main()

{

int p;
int r;
int n;
int si;
int a;

printf("Enter the value of p: ");
scanf("%d",&p);

printf("Enter the value of r: ");
scanf("%d",&r);

printf("Enter the value of n: ");
scanf("%d",&n);

si = p*r*n/100;

a = si+p;

printf("si is :%d\n",si);

printf("Total Amount is :%d \n",a);

return 0;

}