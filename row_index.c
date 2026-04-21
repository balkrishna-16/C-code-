#include <stdio.h>

int main() {
    int rows = 3, cols = 4;
    int arr[3][4] = { {1, 2, 3, 4}, 
                      {5, 6, 7, 8}, 
                      {9, 10, 11, 12} };

    // Displaying array elements with their index positions
    printf("Index | Row | Col | Value\n");
    printf("-------------------------\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j; 

     // Converting 2D to 1D index
            printf("  %2d   |  %d  |  %d  |  %2d\n", index, i, j, arr[i][j]);
    }
    }
    return 0;
}