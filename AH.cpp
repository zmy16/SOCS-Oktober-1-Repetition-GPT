#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    for (int t = 1; t <= T; t++) {
        long long N;
        scanf("%lld", &N);  // Read the integer N
        
        // Calculate the length of the integer N
        int length = 0;
        long long temp = N;
        while (temp > 0) {
            temp /= 10;  // Divide by 10 to remove the last digit
            length++;    // Increment the length
        }
        
        // Print the result in the required format
        printf("Case #%d: %d\n", t, length);
    }
    
    return 0;
}

