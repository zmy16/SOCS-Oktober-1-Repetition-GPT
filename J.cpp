#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int case_number = 1; case_number <= T; case_number++) {
        int N;
        scanf("%d", &N);  // Read the number of item types

        long long total_items = 0;  // Use long long to handle large sums
        for (int i = 0; i < N; i++) {
            int item_count;
            scanf("%d", &item_count);  // Read the count of each item type
            total_items += item_count;  // Add to total
        }

        // Output the result in the specified format
        printf("Case #%d: %lld\n", case_number, total_items);
    }

    return 0;
}




