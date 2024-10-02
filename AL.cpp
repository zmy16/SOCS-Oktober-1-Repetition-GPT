#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // Read the number of weapons and attacks

    int weapons[N]; // Array for weapon powers
    for (int i = 0; i < N; i++) {
        scanf("%d", &weapons[i]); // Read each weapon's power
    }

    int attacks[M]; // Array for dragon attack powers
    for (int i = 0; i < M; i++) {
        scanf("%d", &attacks[i]); // Read each dragon attack's power
    }

    // Find maximum weapon power
    int max_weapon = weapons[0];
    for (int i = 1; i < N; i++) {
        if (weapons[i] > max_weapon) {
            max_weapon = weapons[i];
        }
    }

    // Find maximum dragon attack power
    int max_attack = attacks[0];
    for (int i = 1; i < M; i++) {
        if (attacks[i] > max_attack) {
            max_attack = attacks[i];
        }
    }

    // Compare maximum values
    if (max_weapon > max_attack) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }

    return 0;
}



