#include<stdio.h>
#include<math.h>
int main()
{
       int a,b,c;
       float D,root,root1,root2;
       printf("enter three numbers:\n");
       scanf("%d%d%d",&a,&b,&c);
       D =  b*b - 4*a*c;
       switch(D>0)
       {
               case 1:
                      printf(" BOTH ROOTS ARE REAL AND DISTINCT\n");
                      root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
                      root2 = (-b - sqrt(b*b-4*a*c))/(2*a);
                      printf("\n roots are %.2f and %.2f",root1,root2);

                       break;

       }
       switch(D==0)
       {
              case 1:
                     printf("both roots are real and equal\n");
                     root1 = -b/(2.0*a);
                     printf(" root is %.2f",root1);
                     break;


       }
              switch(D<0)
                     {
                            case 1:
                            printf("imaginary roots");

                     }
                     return 0;
}
