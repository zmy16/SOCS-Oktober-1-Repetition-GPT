#include <stdio.h>

int main() {
    int M, N; // M for number of triangles, N for the length of the triangles
    scanf("%d %d", &M, &N); // Read M and N

    // Loop for each triangle
    for (int m = 0; m < M; m++) {
        // Draw the triangle
        for (int h = 1; h <= N; h++) {
            // Print leading spaces
            for (int j = N; j > h; j--) {
                printf(" "); // Print space for right alignment
            }
            // Print '*' characters for the current height
            for (int i = 0; i < h; i++) {
                printf("*");
            }
            printf("\n"); // Move to the next line after each row
        }
        
    }

    return 0;
}





