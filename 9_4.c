#include<stdio.h>
int main()
{
       int x,a,b,c;
       while(1)
       {
       printf("\n CHECK THREE NO.ARE LENGHTH OF AN ISOSCELES TRIANGLE OR NOT");
       printf("\n CHECK THREE NO. ARE LENGHTH OF AN RIGHT ANGLED TRIANGLE OR NOT ");
       printf("\n CHECK THREE NO.ARE THE LENGTH OF AN EQUILATERAL TRIANGLE OR NOT");
       printf("\n EXIT ");
       printf("\n ENTER YOUR CHOICE: ");
       scanf("%d",&x);
              switch(x)
              {
                     case 1:
                     printf("enter three number:\n");
                     scanf("%d%d%d",&a,&b,&c);
                     if(a==b||b==c||c==a)
                            printf(" ISOSCELES TRIANGLE ");
                     else
                            printf("NOT A ISOSCELES TRIANGLE");
                            break;
                     case 2:
                     printf("enter three number:\n");
                     scanf("%d%d%d",&a,&b,&c);
                     if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
                            printf(" IT IS A RIGHT ANGLED TRIANGLE");
                            else
                                   printf("NOT A RIGHT ANGLED TRIANGLE");
                            break;
                     case 3:
                            printf("enter three number:\n");
                     scanf("%d%d%d",&a,&b,&c);
                     if((a==b)  && (b==c))
                            printf("EQUILATERAL TRIANGLE");
                     else
                            printf("NOT A EQUILATERAL TRIANGLE");
                     break;
                     case 4:
                            break;

              }
                     if(x==4)
                            break;



       }
       return 0;
}
