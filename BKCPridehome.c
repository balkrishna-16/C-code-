#include <stdio.h>

int main()
{
   //Declaring variable
   int BKCPride_Home;
   float BKCPride_Home_No,BKCPride_Home_Income;
   //float BKCPride_Home_Income;
   char BKCPride_Home_Expendicture;
   
   //Initialised
   BKCPride_Home =1;//%d
   BKCPride_Home_No = 5; //%f
   BKCPride_Home_Income =12000; //%f
   BKCPride_Home_Expendicture =5000; //%f
   char BKCPride_meaning[20]= "Balkrishna_chaudhary"; //%s
   
   printf("Hello %s",BKCPride_meaning);
   printf("\n His Home no. is %f",BKCPride_Home_No);
   printf("\n His Home Income is %f",BKCPride_Home_Income);
   printf("\n His Home expenditure is %f",BKCPride_Home_Expendicture);
   
   
}
