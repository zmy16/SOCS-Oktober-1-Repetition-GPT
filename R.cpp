#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); // Read number of houses

        long long heights[N]; // Array to hold heights
        for (int i = 0; i < N; i++) {
            scanf("%lld", &heights[i]); // Read each house height
        }

        long long min_diff = LLONG_MAX; // Initialize minimum difference to a large value

        // Calculate minimum height difference between adjacent houses
        for (int i = 0; i < N - 1; i++) {
            long long diff = heights[i] > heights[i + 1] ? heights[i] - heights[i + 1] : heights[i + 1] - heights[i];
            if (diff < min_diff) {
                min_diff = diff; // Update minimum difference if current is smaller
            }
        }

        // Print result for this test case
        printf("Case #%d: %lld\n", t, min_diff);
    }

    return 0;
}


