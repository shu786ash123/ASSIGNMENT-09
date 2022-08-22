#include<stdio.h>
int main()
{
       int x;
       printf("enter day of week: \n");
       scanf("%d",&x);
       switch(x)
       {
       case 1:
              printf(" i am sunday with funday");
              break;
       case 2:
              printf("i am monday");
              break;
       case 3:
              printf(" i am mangalwaar of hanuman ji");
              break;
       case 4:
              printf("i am wednesday");
              break;
       case 5:
              printf(" i am guruwaar");
              break;
       case 6:
              printf(" i am friday");
              break;
       case 7:
              printf(" i am SATURDAY NIGHT");
              break;
       default :
              printf(" invalid day");


       }
}
