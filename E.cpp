#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read T, which is guaranteed to be 3

    for (int i = 0; i < T; i++) {
        unsigned long long X; // Positive integer
        int P; // Position to check
        scanf("%llu %d", &X, &P); // Read X and P
        
        // Shift right P times and check the least significant bit
        int bitValue = (X >> P) & 1;

        // Output the bit value
        printf("%d\n", bitValue);
    }

    return 0;
}



