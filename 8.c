/*Napisz  program, który przelicza czas podany w sekundach na czas podany w
minutach i sekundach (w godzinach, minutach i sekundach). */
#include <stdio.h>
int main(void) {
	int sekundy, minuty, godziny;
	printf("Podaj ilosc sekund!\n");
	scanf("%d", &sekundy);
	minuty = sekundy / 60;
	godziny = sekundy / 3600;
	printf("%d sekund to %d minut lub %d godzin.", sekundy, minuty, godziny);
	
	return 0;
}
