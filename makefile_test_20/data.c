#include "data.h"
#include <stdlib.h>

float **A = NULL;

void create() {
	A = (float**)malloc(sizeof(float*) * n);
	for (unsigned i = 0; i < n; i++)
		A[i] = (float*)malloc(sizeof(float) * n);
}

void delete() {
	for (unsigned i = 0; i < n; i++)
		free(A[i]);
	free(A);
}