#include <stdio.h>
// Sortowanie przez wstawianie
int main() {
	
	int tab[12] = {5, 6, 2, 756, 23, 54, 66, 22, 76, 33, 11, 12};
	int i;
	for (i = 0; i < 12; i++) {
		printf("%d\t", tab[i]);
	}
	printf("\n\n");
	
	int j;
	int key;
	
	for (j = 2; j < 12; j++) {
		key = tab[j];
		i = j - 1;
		while (j > 0 && tab[i] > key) {
			tab[i+1] = tab[i];
			i--;
				}
		
	tab[i+1] = key;
	}
	
		for (i = 0; i < 12; i++) {
		printf("%d\t", tab[i]);
	}
	
	
	
	return 0;
}
