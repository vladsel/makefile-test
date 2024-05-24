#include "input.h"
#include "data.h"

void random_input() {
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            A[j][i] = (-500 + rand() % 1000) / 10.0;
}

void sorted_input() {
    srand(time(NULL));
    float counter = 0.0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            counter = (((i + 1) * (j + 1) * n) / (i + j + 1 + (rand() % 10))) + counter;
            A[j][i] = counter;
        }
}

void user_input() {
    printf("Input matrix:\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%f", &A[j][i]);
        printf("\n");
    }
}