#include <stdio.h>
#include <math.h>
int main(void)
 {
/*printf("Witaj swiecie\n");
int liczba;
liczba = 5;
int liczba2 = 6;
int liczba3 = 8;
 cokolwiek 
printf("Zmienne to = %d, %d, %d.\n", liczba, liczba2, liczba3);
printf("Zmienne to = \n%d,\n%d,\n%d.", liczba, liczba2, liczba3);

int x;
printf("Podaj liczbe x:\n");
scanf("%d", &x);
if(x>0) {
	printf("Wartosc bezwzgledna wynosi x= %d.", x);
}
else {
	x = -x;
	printf("Wartosc bezwzgledna wynosi x= %d.", x);
}
float a, b, x;
int a, b;
float x;

printf("Podaj a: \n");
scanf("%f", &a);

printf("Podaj b: \n");
scanf("%f", &b);
if (a!=0) {
	x=1.0*(-b)/a;
	printf("Rozwiazaniem rownania jest %f.", x);
}
else if (b!=0) {
	printf("Nieskonczenie wiele rozwiazan!");
}
else {
	printf("Rownanie sprzeczne");
}*/


float a, b, c, delta, x1, x2;

printf("Podaj a: \n");
scanf("%f", &a);

printf("Podaj b: \n");
scanf("%f", &b);

printf("Podaj c: \n");
scanf("%f", &c);

if (a==0) {
	printf("To nie jest równanie kwadratowe.");
} 
else {

	delta=b*b-4*a*c;

// printf("%f", delta); Opcjonalnie sprawdzamy wartosc delty.
if (delta==0) {
	x1=(-b)/(2*a);
	printf("Rozwiazaniem rownania jest %f.", x1);
}
else if (delta>0) {
	x1 = ((-b)-sqrt(delta))/(2*a);
	x2 = ((-b)+sqrt(delta))/(2*a);
	printf("Rozwiazaniem rownania jest %f oraz %f.", x1, x2);
}
else {
	printf("Rownanie nie ma rozwiazania w zakresie liczb rzeczywistych.");
}
}

return 0;
}



