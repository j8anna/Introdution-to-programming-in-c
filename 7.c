#include <stdio.h>
int main(void) {
// Poproœ u¿ytkownika o podanie wynagrodzenia za miesi¹c, wypisz wynagrodzenie roczne w z³ i przeliczone na euro i dolary.
float wynagrodzenie;
const float EURO = 4.24;
const float DOLAR = 3.64;
printf("Podaj swojego wynagrodzenie za miesiac\n");
scanf("%f", &wynagrodzenie);
float rokeuro = wynagrodzenie / EURO * 12;
float rokdolara = wynagrodzenie / DOLAR * 12;
printf("Twoje znak ma za rok wynosi %f euro lub %f dolarow", rokeuro, rokdolara);

	
	return 0; 
}
