#include<stdio.h>
#include<conio.h>

int main()
{
    int a=10,*p;
    p= &a;

    printf("%d %d %d ",a,*p, p);

    return 0;
}