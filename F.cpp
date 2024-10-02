#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    // First square with '#'
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n"); // New line after the first square

    // Second square with '.' and '#' every K rows
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + 1) % K == 0) {
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n"); // New line after the second square

    // Third square with '.' and '#' every K columns
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((j + 1) % K == 0) {
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}







