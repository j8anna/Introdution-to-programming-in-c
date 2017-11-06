/* Wyœwietl 5 podanych liczb w systemie dziesiêtnym, ósemkowym i szesnastkowym. Liczby wyœwietlaj w 3 kolumnach, 
przed ka¿d¹ kolumn¹ umieœæ nag³ówek ( Dziesiêtne------Ósemkowe------Szesnastkowe). */
#include <stdio.h>
int main(void) {
int l1, l2, l3, l4, l5;
printf("Podaj 5 liczb.\n");
scanf("%d %d %d %d %d", &l1, &l2, &l3,&l4,&l5);
printf("Dziesiêtne\tÓsemkowe\tSzesnastkowe\n%d\t%o\t%x\n%d\t%o\t%x\n%d\t%o\t%x\n%d\t%o\t%x\n%d\t%o\t%x\n", l1, l1, l1, l2, l2, l2, l3, l3, l3, l4, l4, l4, l5, l5, l5);
	
	return 0;
}
