//6.Napisz funkcjê, która wyzeruje elementy tablicy pomiêdzy dwoma wskaŸnikami.
//Parametrami funkcji s¹ wskaŸniki do 2 elementów tablicy.

#include <stdio.h>
void zerujemy(int *, int *, int *, int);

int main() {
	
	int i;
	int tablica[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int *w1 = *(tablica + 3);
	int *w2 = *(tablica + 7);
	
	for (i = 0; i < 10; i++)
		printf("%d\t", tablica[i]);
		
	zerujemy(tablica, &w1, &w2, 10);

	for (i = 0; i < 10; i++)
		printf("%d\t", tablica[i]);
		
	return 0;
}
void zerujemy(int *t, int *t1, int *t2, int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (*(t+i) > *t1 && *(t+i) < *t2)
			*(t+i) = 0;
	}
}
