#include<stdio.h>

int main()
{
    int i;
    int marks[5];

    printf("Enter 5 Values :- \n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Displaying entered values : \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}