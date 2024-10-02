#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Baca jumlah test case

    for (int t = 1; t <= T; t++) {
        int N, grade = 0;
        scanf("%d", &N); // Baca jumlah soal

        char S[101], K[101];
        scanf("%s", S); // Baca jawaban Lili
        scanf("%s", K); // Baca kunci jawaban

        // Bandingkan setiap jawaban
        for (int i = 0; i < N; i++) {
            if (S[i] == K[i]) {
                grade++; // Tambah nilai jika jawaban benar
            }
        }

        // Hitung nilai dalam puluhan (proporsi dari 100)
        int result = (grade * 100) / N;

        // Cetak hasil untuk setiap test case
        printf("Case #%d: %d\n", t, result);
    }

    return 0;
}





