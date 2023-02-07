#include<stdio.h>
#include<conio.h>

void add(int,int);
int main()
{
    int a=10,b=10;
    add(a,b);
    return 0;
}
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("Sum is :- %d",sum);
}