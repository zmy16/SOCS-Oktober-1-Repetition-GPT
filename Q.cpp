#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        long long N, X; // Number of pages and the page to open
        scanf("%lld %lld", &N, &X);

        // Calculate flips from the front
        long long flips_from_front = X / 2;

        // Calculate flips from the back
        long long flips_from_back;
        if (N % 2 == 0) {
            flips_from_back = (N - X + 1) / 2; // N is even
        } else {
            flips_from_back = (N - X) / 2; // N is odd
        }

        // Find the minimum flips needed
        long long min_flips = flips_from_front < flips_from_back ? flips_from_front : flips_from_back;

        // Print the result for the current case
        printf("Case #%d: %lld\n", t, min_flips);
    }

    return 0;
}




