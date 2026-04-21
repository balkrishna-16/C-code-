#include <stdio.h>
#include <string.h>

int main()
{
   // char name[20];
    //printf("Enter name:");
    //scanf("%s", name);
    int marks [10];
    marks [0]= 1;
    marks [2]= 3;
    
    char name [20];
    printf("Enter name:");
    //scanf("%s",name); //fgets() function of string
    strcpy( name, "BKCpride.16");
    printf(" Your name is %s", name); //puts() function of string
    return 0;
}
