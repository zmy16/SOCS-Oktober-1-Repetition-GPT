#include <stdio.h>

void print_square(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print '*' at the borders and diagonals
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1 || i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N; // Size of the square (odd number)
        scanf("%d", &N); // Read the size

        print_square(N); // Print the square pattern

        printf("\n"); // Print a newline after each test case
    }

    return 0;
}


