/* Wy�wietl 5 podanych liczb w systemie dziesi�tnym, �semkowym i szesnastkowym. Liczby wy�wietlaj w 3 kolumnach, 
przed ka�d� kolumn� umie�� nag��wek ( Dziesi�tne------�semkowe------Szesnastkowe). */
#include <stdio.h>
int main(void) {
int l1, l2, l3, l4, l5;
printf("Podaj 5 liczb.\n");
scanf("%d %d %d %d %d", &l1, &l2, &l3,&l4,&l5);
printf("Dziesi�tne\t�semkowe\tSzesnastkowe\n%d\t%o\t%x\n%d\t%o\t%x\n%d\t%o\t%x\n%d\t%o\t%x\n%d\t%o\t%x\n", l1, l1, l1, l2, l2, l2, l3, l3, l3, l4, l4, l4, l5, l5, l5);
	
	return 0;
}
