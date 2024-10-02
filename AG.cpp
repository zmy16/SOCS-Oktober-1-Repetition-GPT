#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);  // Read the upper range of cuts
        
        printf("Case %d: ", t);
        for (int i = 0; i < N; i++) {
            // Calculate the maximum number of pieces for i cuts
            int pieces = (i * i + i + 2) / 2;  // Using the formula
            printf("%d", pieces);
            if (i < N - 1) {
                printf(" ");  // Print space between numbers
            }
        }
        printf("\n");  // New line after each case
    }
    
    return 0;
}

