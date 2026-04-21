#include <stdio.h>

int main() {
    for (int i = 1; i <= 80; i++) {
        printf("%d\t", i);
        
        // Print a newline after every 8 numbers
        if (i % 8 == 0) {
            printf("\n");
        }
    }
    return 0;
}