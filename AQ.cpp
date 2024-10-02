#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char S[101];

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%s", S);
        int count = 0, valid = 1;

        for (int j = 0; j < strlen(S); j++) {
            if (S[j] == '.') {
                if (j == 0 || j == strlen(S) - 1 || S[j - 1] == '.') {
                    valid = 0;
                    break;
                }
                count++;
            } else if (S[j] < '0' || S[j] > '9') {
                valid = 0;
                break;
            }
        }

        if (count != 5) valid = 0;

        printf("Case #%d: %s\n", i, valid ? "YES" : "NO");
    }

    return 0;
}

