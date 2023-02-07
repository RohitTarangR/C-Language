#include<stdio.h>
#include<conio.h>

int main()
{
    int value1,value2;

    printf("Enter the Value of :- ",value1);
    scanf("%d",&value1);

    printf("Enter the Value of :- ",value2);
    scanf("%d",&value2);

    if(value1 == value2)
    {
        printf("%d (value1) is equal to %d (value2).",value1,value2);
    }
    else
    {
        printf("%d (value2) is not equal to %d (value2).",value1,value2);
    }
return 0;
}
