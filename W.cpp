#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N; // Number of integers in the current test case
        scanf("%d", &N); // Read the number of integers

        int odd_count = 0; // Counter for odd numbers
        int even_count = 0; // Counter for even numbers
        
        for (int i = 0; i < N; i++) {
            int Ai; // Current integer
            scanf("%d", &Ai); // Read the integer
            
            if (Ai % 2 == 0) {
                even_count++; // Increment even count
            } else {
                odd_count++; // Increment odd count
            }
        }
        
        // Print results for the current test case
        printf("Odd group : %d integer(s).\n", odd_count);
        printf("Even group : %d integer(s).\n\n", even_count);
    }

    return 0;
}

