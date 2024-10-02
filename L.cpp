#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int case_number = 1; case_number <= T; case_number++) {
        int A, B;
        scanf("%d %d", &A, &B);  // Read A and B for each test case

        int total_drunk = A;  // Start with A full bottles
        int empty_bottles = A;  // Initially, all bottles will become empty after drinking

        // While we can exchange empty bottles for new full ones
        while (empty_bottles >= B) {
            int new_bottles = empty_bottles / B;  // Calculate new bottles
            total_drunk += new_bottles;  // Increase total drank
            empty_bottles = new_bottles + (empty_bottles % B);  // Update empty bottles count
        }

        // Print the result for the current case
        printf("Case #%d: %d\n", case_number, total_drunk);
    }

    return 0;
}

