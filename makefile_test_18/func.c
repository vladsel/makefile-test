#include "func.h"
#include "data.h"

void release() {
	m_x = -1, m_y = -1, x = 3.0;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			if (A[j][i] == x) {
				m_y = j;
				m_x = i;
				flag = 1;
				break;
			}
		if (flag == 1)
			break;
	}
	if (m_x == -1 && m_y == -1)
		printf("\nx = %.1f, wasn't found\n\n", x);
	else
		printf("\nx = %.1f, was found\ncoordinates: m_x = %d, m_y = %d\n\n", x, m_x, m_y);
}

void debug() {
	m_x = -1, m_y = -1, x = 3.0;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			if (A[j][i] == x) {
				m_y = j;
				m_x = i;
				flag = 1;
				break;
			}
		if (flag == 1)
			break;
	}
	if (m_x == -1 && m_y == -1)
		printf("\nx = %.1f, wasn't found\n\n", x);
	else
		printf("\nx = %.1f, was found\ncoordinates: m_x = %d, m_y = %d\n\n", x, m_x, m_y);
}
