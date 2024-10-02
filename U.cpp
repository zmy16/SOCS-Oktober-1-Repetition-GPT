#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) {
        int N; // Number of games
        scanf("%d", &N);
        
        char S[N + 1]; // String to hold the results of the games
        scanf("%s", S);
        
        int countBibi = 0; // Count of Bibi's wins
        int countLili = 0; // Count of Lili's wins
        
        // Count wins for Bibi and Lili
        for (int i = 0; i < N; i++) {
            if (S[i] == 'B') {
                countBibi++;
            } else if (S[i] == 'L') {
                countLili++;
            }
        }
        
        // Determine who won more games
        if (countBibi > countLili) {
            printf("Bibi\n");
        } else if (countLili > countBibi) {
            printf("Lili\n");
        } else {
            printf("None\n");
        }
    }
    
    return 0;
}

