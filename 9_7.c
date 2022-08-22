#include<stdio.h>
int main()
{
int x;
       float amount=0,total=0;
       printf("ENTER ELECTRICITY UNIT:\n");
       scanf("%d",&x);
       switch(x<=50)
       {
       case 1: amount = x*0.5;
       break;
       case 0: switch(x<=150)
                            {
                                   case 1: amount = 25 + (x-50)*0.75;
                                          break;
                                   case 0: switch(x<=250)
                                                        {
                                                               case 1:  amount = 100 + (x - 150)*1.20;
                                                               break;
                                                               case 0: amount = 220 + (x - 250)*1.50;
                                                               break;
                                                        }
                                          break;

                            }
              break;

       }
       total = amount + amount * 0.20;
       printf(" total amount = %.2f",total);
       return 0;



}
