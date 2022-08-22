#include<stdio.h>
int main()
{
       int var;
       printf(" ENTER A NUMBER \n");

       scanf("%d",&var);
       switch(var)
       {
       case 1:
              printf(" GOOD");
              break;
       case 2:
              printf("BETTER");
              break;
       case 3:
              printf("BEST");
              break;
       case 4:
              default :
              printf("INVALID");


       }
       return 0;

}
