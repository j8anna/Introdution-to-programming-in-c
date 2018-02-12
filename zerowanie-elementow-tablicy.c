// Napisz funkcjê, która w tablicy NxN wyzeruje liczby umieszczone na przek¹tnej.
#include <stdio.h>
#define N 5
double sumuje(double tab[N][N]);
int main() {
double tablica[N][N] = {{1.0, 2.0, 3.0, 4.0, 5.0}, {1.0, 2.0, 3.0, 4.0, 5.0}, {1.0, 2.0, 3.0, 4.0, 5.0}, {1.0, 2.0, 3.0, 4.0, 5.0}, {1.0, 2.0, 3.0, 4.0, 5.0}};
int i, j;
for (i = 0; i < N; i++) {

	for (j = 0; j < N; j++) {

		printf("%.1f\t", tablica[i][j]); 	}
	printf("\n");
	}
	
	printf("\n\n");
	printf("Suma wynosi %f.", sumuje(tablica));
	
	
	return 0;
}

double sumuje(double tab[N][N]) {
	int i, j, suma = 0;
	for (i = 0; i < N; i++) {

	for (j = 0; j < N; j++) {
	if (i == j) {
		suma+=tab[i][j];
	
	}	}
	
	}
	return suma;
}
