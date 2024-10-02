#include <stdio.h>

int main() {
    int Q; // Number of processes
    scanf("%d", &Q); // Read the number of processes

    int N = 1; // Start with N = 1

    for (int i = 0; i < Q; i++) {
        N = N * 2 + 1; // Perform the operation
    }

    printf("%d\n", N); // Output the final value of N
    return 0;
}

