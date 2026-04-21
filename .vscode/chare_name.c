#include <stdio.h>

int main()
{
    char name[] = "Balkrishna";
    char *ptr = &name[0];
    printf("ptr : %i \n", *(ptr+1) );
    printf("pointer value %c \n", *name);
    printf("pointer value %c \n", *(name +1));
    printf("pointer value %c \n", *(name +5));
    return 0;
}
