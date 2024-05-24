#include "task.h"
#include "data.h"
#include "out.h"

#include <stdio.h>

void release_version() {
    printf("\n\n\t\trelease version of task\n");
    float temp_max = A[0][0], temp_min = A[0][0];
    unsigned pos_first_max = 0, pos_last_min = 0;
    for (unsigned i = 1; i < n; i++) {
        if (temp_max < A[i][i]) {
            temp_max = A[i][i];
            pos_first_max = i;
        }
        if (temp_min >= A[i][i]) {
            temp_min = A[i][i];
            pos_last_min = i;
        }
    }
    A[pos_first_max][pos_first_max] = temp_min;
    A[pos_last_min][pos_last_min] = temp_max;
    printf("\npos first max = %d, pos last min = %d\n", pos_first_max, pos_last_min);
    printf("\n\tmatrix release version after task\n");
    out();
    printf("\n\n\t\trelease function finished\n\n");
}

void debug_version() {
    printf("\n\n\t\tdebug version of task\n");
    float temp_max = A[0][0], temp_min = A[0][0];
    unsigned pos_first_max = 0, pos_last_min = 0;
    for (unsigned i = 1; i < n; i++) {
        if (temp_max < A[i][i]) {
            temp_max = A[i][i];
            pos_first_max = i;
        }
        if (temp_min >= A[i][i]) {
            temp_min = A[i][i];
            pos_last_min = i;
        }
    }
    A[pos_first_max][pos_first_max] = temp_min;
    A[pos_last_min][pos_last_min] = temp_max;
    printf("\npos first max = %d, pos last min = %d\n", pos_first_max, pos_last_min);
    printf("\n\tmatrix debug version after task\n");
    out();
    printf("\n\n\t\tdebug function finished\n\n");
}
