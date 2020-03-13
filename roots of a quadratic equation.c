#include<stdio.h>
#include<math.h>/*used for sqrt()*/
int main()
  {
    float a,b,c,root1,root2,d,img;
    printf("rnter the 3 coefficients a,b,c:");
    scanf("%f%f%f",&a,&b,&c0;
    if(!a)
    printf("value of \'a\' should not be zero\n");
    else
      {
        /*find discriminant of the equation*/
        d=b*b-4*a*c;
        /*find the nature of the discriminant*/
        if(d>0)
          {
            root1=(-b+sqrt(d))/(2*a);
            root2=(-b-sqrt(d))/(2*a);
            printf("two distinct and real roots exist:%.2f and %.2f",root1,root2);
          }
          else if(d==0)
            {
              root1=root2=-b/(2*a);
              printf("two equal and real roots exists:%.2f and %.2f",root1,root2);
            }
          else if(d<0)
            {
              root1=root2--b/(2*a);
              img=sqrt(-d)/(2*a);
              printf("two distinct complec roots ecists:%.2f+i%.2f",root1,img,root2,img);
            }
            return 0;
  }            
            
            
            
