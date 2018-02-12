// Napisz funkcjê, która dostaje jako argumenty tablicê dwuwymiarow¹ 
//i odwraca kolejnoœæ elementów we wszystkich wierszach otrzymanej tablicy.

#include <stdio.h>
void odwraca(int t[][2]); 
void w(int t[][2]); 

int main() {
	int tablica[][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

	w(tablica);
	odwraca(tablica);
	w(tablica);
		
	return 0;
		}
		
void odwraca(int t[][2]) {
	int pomocnicza[4][2]; 
	int i, j, x, y;
	
	for (i = 0; i < 4; i++) // Kopiujemy tablice.
		for (j = 0; j < 2; j++)
			pomocnicza[i][j] = t[i][j];
	
	for (i = 0, x = 3; i < 4; i++, x--) // Odwraca elementy tablicy.
		for (j = 0, y = 1; j < 2; j++, y--) 
			t[i][j] = pomocnicza[x][y];
			
			
						}

void w(int t[][2]) {
	int i, j;
		
	for (i = 0; i < 4; i++) // Wyœwietla elementy tablicy.
		for (j = 0; j < 2; j++)
			printf("%d\t", t[i][j]);
			
	printf("\n\n");
}
