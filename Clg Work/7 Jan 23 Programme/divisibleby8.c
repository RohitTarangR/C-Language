#include<stdio.h>

int main ()
{
    int i;

    printf("These all numbers are divisible by 8 in 1 to 50 numbers :- \n",i);

    for(i = 1; i <= 50; i++)
    {
        if(i%8 == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}