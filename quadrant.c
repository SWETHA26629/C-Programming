#include<stdio.h>
void main()
  {
    float n1,n2;
    printf("enter coordinate points:(x,y)format");
    scanf("%f%f",&n1,&n2);
    if(n1==0 && n2==0)
      printf("point is at origin");
    else if(n1>0 && n2>0)
      printf("point is in first quadrant");
    else if(n1>0 && n2<0) 
      printf("point is in fourth quadrant");
    else if(n1<0 && n2<0)
      printf("point is in third quadrant");
    else
      printf("point is in second quadrant");
 }     
