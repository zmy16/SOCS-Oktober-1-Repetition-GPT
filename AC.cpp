#include <stdio.h>

void solve(int N, int M, int prices[]) {
    int min_price = prices[0];
    for (int i = 1; i < N; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        }
    }

    int max_candies = M / min_price;
    printf("%d\n", max_candies);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int prices[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &prices[i]);
        }

        printf("Case #%d: ", case_num);
        solve(N, M, prices);
    }

    return 0;
}





