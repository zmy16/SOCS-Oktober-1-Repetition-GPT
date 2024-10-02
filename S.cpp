#include <stdio.h>

int main() {
    int N;
    long long P;

    // Read the number of balloons and Bibi's strength
    scanf("%d %lld", &N, &P);

    long long strength[N]; // Array to store the strength of each balloon
    int count = 0; // Counter for balloons that can be popped

    // Read the strength of each balloon
    for (int i = 0; i < N; i++) {
        scanf("%lld", &strength[i]);
    }

    // Count how many balloons can be popped
    for (int i = 0; i < N; i++) {
        if (P > strength[i]) {
            count++; // Increment the count if Bibi's strength is greater
        }
    }

    // Output the total count of balloons that can be popped
    printf("%d\n", count);

    return 0;
}

