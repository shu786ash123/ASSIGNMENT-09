#include<stdio.h>
int main()
{
       int x;

       switch(1)
       {
       case 1:
               printf("ENTER ANY YEAR\n");
       scanf("%d",&x);
              if(x%100==0)
              {
                     if(x%400==0)
                            printf(" %d is a leap year\n",x);
                     else
                            printf(" %d is not a leap year\n",x);
              }
              else
              {
                     if(x%4==0)
                            printf("%d is a leap year \n",x);
                     else
                            printf(" %d is not a leap year\n",x);
             }
             break;
       default :
              printf("ANONYMOUS");

         }
         return 0;
}
