#include<stdio.h>
// #include<conio.h>

void main ()

{
    int a,b,c;

    printf("Enter the Value of A1 :- ",&a);
    scanf("%d",&a);

    printf("Enter the Value of A2 :- ",&b);
    scanf("%d",&b);
    
    printf("Enter the Value of A3 :- ",&c);
    scanf("%d",&c);

    printf("a = %d\tb = %d\tc = %d\n", a, b, c);

    if(&a > &b)
    {
        if(&a > &c)
        {
            printf("%d is largest number out of three numbers.",a);
        }
        else
        {
            printf("%d is the largest number of three numbers.",c);
        }
    }
    else if(&b > &c)
    
        printf("%d is the largest number of three numbers.",b);
    
    else
    
        printf("%d is the largest number of three numbers.",c); 
    
    // return 0;
}

