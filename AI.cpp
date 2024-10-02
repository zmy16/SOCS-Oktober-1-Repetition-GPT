#include <stdio.h>

const char* can_split_equal_sum(int arr[], int N) {
    long long total_sum = 0, left_sum = 0;
    
    // Hitung total sum array
    for (int i = 0; i < N; i++) {
        total_sum += arr[i];
    }
    
    // Cek apakah bisa dibagi dengan jumlah sama
    for (int i = 0; i < N - 1; i++) {
        left_sum += arr[i];  // Tambah elemen ke sum kiri
        if (left_sum == total_sum - left_sum) {
            return "Yes";  // Jika sum kiri == sum kanan
        }
    }
    
    return "No";
}

int main() {
    int T;
    scanf("%d", &T);  // Jumlah test case
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);  // Jumlah elemen array
        
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);  // Input elemen
        }
        
        // Panggil fungsi dan cetak hasil
        printf("Case #%d: %s\n", t, can_split_equal_sum(arr, N));
    }
    
    return 0;
}



