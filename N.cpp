#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int case_number = 1; case_number <= T; case_number++) {
        int A, B;
        scanf("%d %d", &A, &B);  // Read A and B for each test case

        int total_drunk = A;  // Start with the cups Bibi initially buys
        int empty_cups = A;   // Initially, all cups will be empty after drinking

        // While Bibi can exchange empty cups for new full ones
        while (empty_cups >= B) {
            int new_cups = empty_cups / B;  // Calculate new cups from empty cups
            total_drunk += new_cups;         // Increase total drunk
            empty_cups = new_cups + (empty_cups % B);  // Update empty cups count
        }

        // Print the result for the current case
        printf("Case #%d: %d\n", case_number, total_drunk);
    }

    return 0;
}

