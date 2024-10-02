#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    long long money, result = 0;

    for(int i = 0; i < T; i++){
        scanf("%lld", &money);

        result += money; 
    }
    printf("%d\n", result);

    return 0;
}
