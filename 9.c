#include <stdio.h>
int main(void) {
/*Napisz  program, który wyœwietli  ile bajtów zajmuj¹ typy char, int, float, double. 
Zadeklaruj zmienne wymienionych typów.*/
char znak;
int liczba;
float liczba2;
double liczba3;

printf("Podaj dowolny znak\n");
scanf("%c", &znak);
float znakile = sizeof(znak);

printf("Podaj dowolna liczbe calkowita\n");
scanf("%d", &liczba);
float liczbaile = sizeof(liczba);

printf("Podaj dowolna liczbe\n");
scanf("%f", &liczba2);
float liczba2ile = sizeof(liczba2);

printf("Podaj dowolna liczbe\n");
scanf("%f", &liczba3);
float liczba3ile = sizeof(liczba3);

printf("Znak zajmuje pamieci %f.\nInt zajmuje pamieci %f.\nFloat zajmuje pamieci %f.\nDouble zajmuje pamieci %f.", znakile, liczbaile, liczba2ile, liczba3ile);
	
	return 0;
}
