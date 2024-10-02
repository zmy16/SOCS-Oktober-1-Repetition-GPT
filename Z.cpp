#include <stdio.h>

int main() {
    int N; // Number of dice rolls
    scanf("%d", &N); // Read the number of rolls

    int position = 0; // Starting position

    for (int i = 0; i < N; i++) {
        int k; // The sum of the dice rolled
        scanf("%d", &k); // Read the value of the dice

        // Move to the new position
        position += k;

        // Check for special rules
        if (position == 12) {
            position = 28; // Move to square 28
        } else if (position == 30) {
            position = 10; // Move to Jail (square 10)
        } else if (position == 35) {
            position = 7; // Move to square 7
        }

        // Wrap around if position is greater than or equal to 40
        position = position % 40;
    }

    // Print the final position
    printf("%d\n", position);
    return 0;
}

