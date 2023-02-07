// // write a code to find a maximum number out of three numbers in c language

// #include <stdio.h>
// #include<conio.h>
 
// void main()
// {
//     int num1, num2, num3;
 
//     printf("Enter the value of num1 :- ",num1);
//     scanf("%d",&num1);

//     printf("Enter the Value of num2 :- ",num2);
//     scanf("%d",&num2);

//     printf("Enter the Value of num3 :- ",num3);
//     scanf("%d",&num3);

//     printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);

//     if (num1 > num2)
//     {
//         if (num1 > num3)
//         {
//             printf("%d is the largest number.", num1);
//         }
//         else
//         {
//             printf("%d is the largest number.", num3);
//         }
//     }
//     else if (num2 > num3)
//         printf("%d is the largest number.", num2);
//     else
//         printf("%d is the largest number.", num3);

// }



// #include<stdio.h>
// #include<conio.h>

// int main ()
// {

// int x, y, z; 
// printf (" Enter the first number: "); 
// scanf ("%d", &x); 
// printf (" Enter the second number: "); 
// scanf ("%d", &y); 
// printf (" Enter the third number: "); 
// scanf ("%d", &z); 
 
// // use logical AND operator to validate the condition 
// if ( x >= y && x >= z ) 
// { 
// printf (" %d is the largest number of all. ", x); 
// } 
// else if ( y >= x && y >= z) 
// { 
// printf (" %d is the largest number of all. ", y); 
// } 
// else 
// { 
//  printf ( " %d is the largest number of all. ", z); 
// } 
// return 0; 
// } 