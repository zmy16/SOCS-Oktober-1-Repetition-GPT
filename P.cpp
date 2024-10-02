#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int K; // Finish line location
        scanf("%d", &K);
        
        int jumps = 0;
        int distance = 0;

        // Calculate minimum jumps needed
        while (distance < K) {
            jumps++;
            distance += jumps; // Each jump is equal to the number of jumps made
        }

        // Output the result
        printf("Case #%d: %d\n", t, jumps);
    }

    return 0;
}

