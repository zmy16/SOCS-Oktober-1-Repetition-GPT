#include <stdio.h>

int main() {
    int N, M;
    
    // Input
    scanf("%d %d", &N, &M);
    
    // Counting and printing M numbers starting from N
    for (int i = 0; i < M; i++) {
        printf("%d\n", M + i);
    }
    
    return 0;
}

