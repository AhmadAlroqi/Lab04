#include <stdio.h>

int main() {
    int population[10];
    int numPopulation, minPopulation, maxPopulation;
    float meanPopulation = 0;

    printf("Enter population for 10 cities:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numPopulation);
        population[i] = numPopulation;
        meanPopulation += numPopulation;

        if (i == 0) {
            minPopulation = numPopulation;
            maxPopulation = numPopulation;
        } else {
            if (numPopulation > maxPopulation) {
                maxPopulation = numPopulation;
            }
            if (numPopulation < minPopulation) {
                minPopulation = numPopulation;
            }
        }
    }

    meanPopulation /= 10;

    printf("Population in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", population[i]);
    }

    printf("\nMean population: %.2f\n", meanPopulation);
    printf("Maximum population: %d\n", maxPopulation);
    printf("Minimum population: %d\n", minPopulation);

    return 0 ;
}

