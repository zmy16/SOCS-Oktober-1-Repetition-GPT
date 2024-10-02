#include <stdio.h>

int main() {
    int N, M;

    // Read input values
    scanf("%d %d", &N, &M);

    // Generate and print the arithmetic progression
    for (int i = 0; i <= M; i++) {
        printf("%d\n", N + i);
    }

    return 0;
}

