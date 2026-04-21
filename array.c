#include <stdio.h>

int main()
{     // POINTER ARITHMETIC
    int arr[] = {9,8,7};
    int *pt;
    printf(" Array index %d \n", arr[0]);
    printf(" Array index %d \n", arr[1]);
    printf(" Array index %d \n", arr[2]);
    pt = &arr[1];
    printf(" Array pt %d \n", *pt);      
    printf(" Array : %d \n", *pt-6);  
    printf(" Array pt %d \n", *(pt +1));      

    return 0;
}