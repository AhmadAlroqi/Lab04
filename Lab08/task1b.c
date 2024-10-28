#include <stdio.h>

int main() {
    int N; 
    int i = 1;
    printf("Enter number of rows: ");
    scanf("%d", &N);

    while (i <= N) {
        int j = 0;
        while (j < N - i) {
            printf(" ");
            j++;
        }
        int k = 0;
        while (k < i) {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

