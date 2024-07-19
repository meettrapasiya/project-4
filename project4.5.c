#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows in the pyramid
    
    // Outer loop for rows
    for (int i = 5; i > rows; i--) {
        
        // Spaces before numbers
        for (int j = 0; j < 2 * (rows - i - 1); j++) {
            printf(" ");
        }
        
        // Increasing sequence
        for (int j = 1; j <= i + 1; j++) {
            printf("%d ", j);
        }
        
        // Decreasing sequence
        for (int j = i; j > 0; j--) {
            printf("%d ", j);
        }
        
        printf("\n");  // Move to the next line after each row
    }
    
    return 0;
}
