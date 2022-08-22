#include<stdio.h>
int main()
{
       int x,a,b;
       while(1)
       {
       printf("\n ADDITION");
       printf("\n DIFFERENCE");
       printf("\n MULTIPLICATION");
       printf("\n DIVISON");
       printf("\n EXIT ");
        printf("\n ENTER YOUR CHOICE: ");
       scanf("%d",&x);
              switch(x)
              {
              case 1:
                     printf("enter two number: \n");
                     scanf("%d%d",&a,&b);
                     printf(" sum is %d",a+b);
                     break;
              case 2:
                     printf("enter two number:\n");
                     scanf("%d%d",&a,&b);
                     printf(" difference is %d",a-b);
                     break;
              case 3:
                     printf("  enter two number:\n");
                     scanf("%d%d",&a,&b);
                     printf(" multiplication is %d",a*b);
                     break;
              case 4:
                     printf(" enter two number:\n");
                     scanf("%d%d",&a,&b);
                     printf("quotient is %d ",a/b);
                     break;
              case 5:
                     break;
              }
              if(x==5)
                     break;

              }
              printf("\n");
              return 0;

}
