#include<stdio.h>
#include<conio.h>

int add(void);
int main()
{
    int sum;
    sum=add();
    printf("Sum is :- %d",sum);
    return 0;
}
int add()
{
    int a,b,c;
    printf("Number :- ");
    scanf("%d %d",&a,&b);
    c=a+b;
    return(c);
}