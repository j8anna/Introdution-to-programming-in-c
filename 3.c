/*Napisz program, kt�ry na podstawie wieku zapami�tanego w zmiennej, obliczy ile dni �yje dana osoba ( nie uwzgl�dniaj lat przest�pnych, ani u�amk�w).*/
#include <stdio.h>
int main(void) {
int age;
printf("Podaj swoj wiek");
scanf("%d", &age);	
age = age*365;
printf("Zyjesz od okolo %d dni.", age);
	
	
	return 0;
}
