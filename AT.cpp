#include <stdio.h>

void draw_isosceles_triangle(int X) {
    // Loop untuk menggambar baris segitiga
    for (int i = 1; i <= X; i++) {
        // Cetak spasi untuk meratakan segitiga
        for (int j = 1; j <= X - i; j++) {
            printf(" ");
        }
        // Cetak bintang-bintang
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T); // Baca jumlah test case

    for (int t = 1; t <= T; t++) {
        int X;
        scanf("%d", &X); // Baca panjang sisi segitiga

        // Gambar segitiga untuk setiap test case
        draw_isosceles_triangle(X);
    }

    return 0;
}


