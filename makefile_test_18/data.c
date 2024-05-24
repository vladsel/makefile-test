#include "data.h"

void create() {
	A = (float**)malloc(sizeof(float*) * m);
	for (int i = 0; i < m; i++)
		A[i] = (float*)malloc(sizeof(float) * n);
}

void delete() {
	for (int i = 0; i < m; i++)
		free (A[i]);
	free(A);
}