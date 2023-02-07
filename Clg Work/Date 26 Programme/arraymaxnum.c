#include <conio.h>
#include <stdio.h>

int main()
{
    int i;
    int array[5] = {0, 1, 10, 3, 4};
    int max;
    max = array[5];

    // storing the largest number at arr[0]
    for (int i = 1; i < 5; i++)
    {
        if (max < array[i])
        {
            array[i] = max;
        }
    }
    printf("\nMaximum number is :- %d", max);
    return 0;
}