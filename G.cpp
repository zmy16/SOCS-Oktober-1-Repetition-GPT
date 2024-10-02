#include <stdio.h>

int main() {
    int N;
    
    // Read the number of cages
    scanf("%d", &N);
    
    int animals[N]; // Array to hold the number of animals in each cage
    int totalAnimals = 0; // Variable to hold the total number of animals

    // Read the number of animals in each cage
    for (int i = 0; i < N; i++) {
        scanf("%d", &animals[i]);
        totalAnimals += animals[i]; // Sum the animals
    }

    // Output the total number of animals
    printf("%d\n", totalAnimals);

    return 0;
}

