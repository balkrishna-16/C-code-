#include <stdio.h>

int main()
{
    int a = 10;
    int b = a;
    a = 20;
    printf ("A value %d", a);
    printf("\nB value %d", b);

    int x = 10;
    int *y = &x;
    x = 20;
    printf ("\nX value %d", x);
    printf ("\nX value %d",&x);
    printf("\nY value %d", *y);
    printf ("\nX value %d",&y);
    

    return 0;
}