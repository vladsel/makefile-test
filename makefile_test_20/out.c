#include "out.h"
#include "data.h"

#include <stdio.h>

void out() {
    printf("\n");
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++)
            printf("%8.1f", A[i][j]);
        printf("\n");
    }
}