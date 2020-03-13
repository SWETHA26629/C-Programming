#include<stdio.h>
int main()
  {
    float principle,time,rate,SI;
    /*input principle,rate and time*/
    printf("enter principle(amount):");
    scanf("%f",&principle);
    printf("enter time:");
    scanf("%f",&time);
    printf("enter rate:");
    scanf("%f",&rate);
    /*calculate simple interest*/
    SI=(principle*time*rate)/100;
    /*print the resultant value of SI*/
    printf("simple interest=%f",SI);
    return 0;
  }    
    
    
