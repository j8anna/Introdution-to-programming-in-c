// Program obliczajacy sume n wpisana przez uzytkownika 1 + 22 + 333 + 4444 + n.

#include <stdio.h>
#include <math.h>

int main() {
	
	int n; 
	int m; 
	int liczba; 
	int suma = 0; 
	
	printf("Podaj liczbe n!\t");
	scanf("%d", &n);

	for (liczba = 0; n > 0; n--) { //W tej petli dodajemy liczby od 1 do n.
	
		for (m = n; m >= 0; m--) { 
		
			/* W tej petli uzyskujemy liczbe wedlug algorytmu
			2 -> 22, 3 - > 333 itp.*/
			
			liczba += n * pow(10, m-1);

		}
		
	/* Dodajemy otrzymana liczbe do sumy i zerujemy zmienna 
	przed kolejnym obiegiem petli. */
	
	suma += liczba; 
	liczba = 0;

								}
								
	printf("\nSuma liczb wynosi %d.", suma);
	return 0;
}
