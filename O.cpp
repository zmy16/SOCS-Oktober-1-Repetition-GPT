#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int case_number = 1; case_number <= T; case_number++) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);  // Read N, M, K for each test case

        int largest_portion = K;  // Start with the portion given to Lili
        int Xi;

        // Read the plate portions and find the largest suitable one
        for (int i = 0; i < N; i++) {
            scanf("%d", &Xi);  // Read the portion of each plate
            // Check if the portion is larger than K and within capacity M
            if (Xi > K && Xi <= M) {
                if (Xi > largest_portion) {
                    largest_portion = Xi;  // Update if it's larger
                }
            }
        }

        // Output the result for the current case
        printf("Case #%d: %d\n", case_number, largest_portion);
    }

    return 0;
}

