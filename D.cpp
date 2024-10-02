#include <stdio.h>

int main() {
    int N, M;
    
    // Read input values
    scanf("%d %d", &N, &M);
    
    // Generate Lili's list of numbers
    for (int i = N; i <= N + M; i++) {
        printf("%d\n", i);
    }
    
    
    
    return 0;
}

