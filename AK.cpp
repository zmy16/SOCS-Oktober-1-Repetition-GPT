#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Baca jumlah angka yang diucapkan

    int A[N]; // Array untuk menyimpan angka
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // Baca setiap angka
    }

    int steps = 0; // Hitung langkah
    for (int i = 0; i < N; i++) {
        if (A[i] == 1) {
            // Jika langkah sebelumnya ada, cetak
            if (steps > 0) {
                printf("%d ", steps);
            }
            steps = 1; // Mulai menghitung langkah baru
        } else {
            steps++; // Tambah langkah jika bukan 1
        }
    }
    // Cetak langkah terakhir
    printf("%d\n", steps);

    return 0;
}





