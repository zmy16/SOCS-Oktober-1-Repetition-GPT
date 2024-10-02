#include <stdio.h>
#include <string.h>

// Function to convert a message
void convert_message(int N, int K, char S[]) {
    K = K % 26; // Reduce K modulo 26 to avoid unnecessary large values
    for (int i = 0; i < N; i++) {
        // Convert the character to a number (a = 0, b = 1, ..., z = 25)
        int original_num = S[i] - 'a';
        // Add K and wrap around using modulus 26
        int new_num = (original_num + K) % 26;
        // Convert the number back to a character
        S[i] = 'a' + new_num;
    }
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    for (int t = 1; t <= T; t++) {
        int N, K;
        char S[101]; // Maximum length of the string is 100, so allocate 101 for the null terminator

        // Read N and K
        scanf("%d %d", &N, &K);
        // Read the string S
        scanf("%s", S);

        // Convert the message
        convert_message(N, K, S);

        // Print the result for the current test case
        printf("Case #%d: %s\n", t, S);
    }

    return 0;
}


