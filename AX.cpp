#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Baca jumlah saham

    long long total_profit = 0; // Menggunakan long long untuk menghindari overflow
    int A[N];

    // Baca keuntungan untuk setiap saham
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);

        // Tambahkan ke total_profit jika A[i] positif
        if (A[i] > 0) {
            total_profit += A[i];
        }
    }

    // Cetak total keuntungan maksimum
    printf("%lld\n", total_profit);

    return 0;
}

