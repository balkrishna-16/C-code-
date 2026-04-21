#include <stdio.h>

int main()
{
    int a = 10;
    int *b= &a;
    printf ("value %i \n", a );
    printf ("value %i \n", *b );
    printf("Adress %p \n", &a);
    printf("Pointer address: %p\n", b);
    

    return 0;
}