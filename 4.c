/*Oblicz pole powierzchni i objêtoœæ kuli. Zdefiniuj sta³¹ pi=3.14159.*/
#include <stdio.h>
int main(void) {

const double PI = 3.14159;
double promien, objetosc, powierzchnia;

printf("Podaj promien kuli");
scanf("%f", &promien);	
objetosc = 4/3*PI*(promien*promien*promien);
powierzchnia = 4*PI*(promien*promien);
printf("Objetosc kuli wynosi %f, a jej powierzchnia %f.", objetosc, powierzchnia);

return 0;
}
