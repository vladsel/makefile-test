#include "output.h"
#include "data.h"

void output() {
    printf("\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%8.1f", A[i][j]);
        printf("\n");
    }
}