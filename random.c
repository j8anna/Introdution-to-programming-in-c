#include <stdio.h>
#include <stdlib.h>
int main(void) {
	
srand(time(0));
int cokolwiek = rand()%10+1;
int liczba;
printf("Sprobuj zgadnac liczbe 1-10!\n");
scanf("%d", &liczba);
if (cokolwiek == liczba) {
printf("Brawo, zgadles liczbe!");
}
else {
	printf("Niestety, poprawna odpowiedzia bylo %d.", cokolwiek);
}
	
	return 0;
}
