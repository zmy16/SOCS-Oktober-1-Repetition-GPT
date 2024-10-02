#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Jumlah item Bibi
    
    int count[1001] = {0};  // Array untuk menghitung frekuensi jenis item
    
    // Input jenis item dan hitung frekuensinya
    for (int i = 0; i < N; i++) {
        int item;
        scanf("%d", &item);
        count[item]++;
    }
    
    int max_packets = 0;  // Untuk menyimpan jumlah paket minimum yang diperlukan
    
    // Temukan frekuensi maksimum
    for (int i = 1; i <= 1000; i++) {
        if (count[i] > max_packets) {
            max_packets = count[i];
        }
    }
    
    // Cetak jumlah paket minimum yang diperlukan
    printf("%d\n", max_packets);
    
    return 0;
}

