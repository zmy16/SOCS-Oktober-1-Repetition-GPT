#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int case_number = 1; case_number <= T; case_number++) {
        int N;
        long long M;  // Use long long for large amounts of money
        scanf("%d %lld", &N, &M);  // Read N and M

        long long total_cost = 0;  // Variable to hold the total cost

        // Read the prices and calculate the total cost
        for (int i = 0; i < N; i++) {
            long long price;
            scanf("%lld", &price);  // Read the price of each item
            total_cost += price;  // Add to total cost
        }

        // Determine if Jojo has enough money
        if (total_cost > M) {
            printf("Case #%d: Wash dishes\n", case_number);  // Not enough money
        } else {
            printf("Case #%d: No worries\n", case_number);  // Enough money
        }
    }

    return 0;
}

