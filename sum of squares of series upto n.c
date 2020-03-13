#include<stdio.h>
void main()
  {
    int n,sum=0;
    printf("enter value of n");
    scanf("%D",&n);
    for(int i=0;i<n;i++)
      {
        sum=sum+i*i;
        printf("the sum of squares of %d natural numbers is=%d\n",n,sum);
      }  
