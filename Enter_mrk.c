#include <stdio.h>

int main()
{
   int month;

   printf("Enter you months (1 - 12):");
   scanf("%i",&month);
  printf((month>=3 && month<=5)? "Spring":(month>=6 && month<=8)? "Summer":(month == 12 || month == 1 || month == 2)? "Winter" :"Autumn" ;
    return 0;
}
