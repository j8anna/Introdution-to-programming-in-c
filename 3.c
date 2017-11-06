/*Napisz program, który na podstawie wieku zapamiêtanego w zmiennej, obliczy ile dni ¿yje dana osoba ( nie uwzglêdniaj lat przestêpnych, ani u³amków).*/
#include <stdio.h>
int main(void) {
int age;
printf("Podaj swoj wiek");
scanf("%d", &age);	
age = age*365;
printf("Zyjesz od okolo %d dni.", age);
	
	
	return 0;
}
