#include "input.h"
#include "data.h"

#include <stdlib.h>
#include <stdio.h>

void rand_input() {
    srand(time(NULL));
    for (unsigned i = 0; i < n; i++)
        for (unsigned j = 0; j < n; j++)
            A[i][j] = (-250 + rand() % 500) / 5.0;
}

void sort_input() {
    srand(time(NULL));
    float count = 0.0;
    for (unsigned i = 0; i < n; i++)
        for (unsigned j = 0; j < n; j++) {
            count = (((j + 1) * n * (i + 1)) / (j + 2 + i + (rand() % 5))) + count;
            A[i][j] = count;
        }
}

void user_input() {
    printf("User input matrix:\n\n");
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++)
            scanf("%f", &A[i][j]);
        printf("\n");
    }
}