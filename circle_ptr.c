#include <stdio.h>

int main(){
 float radius;
 printf(" Enter the value of radius:");
 scanf( "%f", &radius);
 float pi = 3.1415;
 float area = pi * radius * radius;
 printf(" The area of circle is : %f", area);

    return 0;
}