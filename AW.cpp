#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Baca jumlah kelas

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); // Baca jumlah siswa di kelas ini

        int A[N], max_score = 0, count = 0;

        // Baca nilai siswa dan cari nilai tertinggi
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);

            // Cari nilai tertinggi
            if (A[i] > max_score) {
                max_score = A[i];
                count = 1; // Setel ulang hitungan siswa dengan nilai tertinggi
            } else if (A[i] == max_score) {
                count++; // Tambah hitungan siswa dengan nilai tertinggi
            }
        }

        // Cetak hasil untuk setiap kelas
        printf("Case #%d: %d\n", t, count);
    }

    return 0;
}

