#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read number of test cases

    for (int t = 1; t <= T; t++) {
        int N, M; // Height and width of the photo frame
        scanf("%d %d", &N, &M); // Read dimensions

        // Print case number
        printf("Case #%d:\n", t);

        // Construct the photo frame
        for (int i = 0; i < N; i++) {
            if (i == 0 || i == N - 1) {
                // First and last rows
                for (int j = 0; j < M; j++) {
                    printf("#");
                }
            } else {
                // Middle rows
                printf("#"); // Start with '#'
                for (int j = 1; j < M - 1; j++) {
                    printf(" "); // Fill with space
                }
                printf("#"); // End with '#'
            }
            printf("\n"); // Move to the next line
        }
    }

    return 0;
}

