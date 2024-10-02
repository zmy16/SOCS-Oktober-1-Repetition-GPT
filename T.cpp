#include <stdio.h>

int main() {
    int N; // Number of clarifications
    scanf("%d", &N);
    
    int answeredCount = 0;

    for (int i = 0; i < N; i++) {
        int tc, ts, tv;
        scanf("%d %d %d", &tc, &ts, &tv);
        
        // Check if Bibi answered the clarification
        if (tc <= tv && ts > tv) {
            answeredCount++;
        }
    }

    printf("%d\n", answeredCount);
    return 0;
}

