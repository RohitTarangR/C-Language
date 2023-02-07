#include<stdio.h>
int main()
{
  int A, B ,C;
  printf("Enter A :");
  scanf("%d",&A);
  printf("Enter B :");
  scanf("%d",&B);

  C = A;
  A = B;
  B = C;

  printf("\n After swapping , A= %d\n",A);
  printf("After swapping , B= %d",B);

    return 0;
}