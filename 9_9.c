#include<stdio.h>
int main()
{
       int x;
       printf(" enter a  number\n");
       scanf("%d",&x);
       switch(x%2==0)
       {
       case 1: printf(" nearest odd number is %d",x+1);
       break;

       case 0: printf("nearest odd number is %d",x);
       break;


       }
       return 0;

}
