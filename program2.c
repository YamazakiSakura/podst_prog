#include <stdio.h>


int mnoz(int a, int b){	return a*b; }
int dodaj(int a, int b){return a+b; }



int main(void)
{
		int a=2, b=5; /*deklaracja wraz z inicjalizacją */
		char wybor ='*';
		
		scanf("%c", &wybor);
/* if(wyrazenie) (blok jesli wyrazenie jest prawdziwe) */
		/* else (blok jesli wyrazenie jest falszywe */

		if(wybor  == '*'){
			printf("wynik mnozenia %i\n", mnoz(a, b));
		}else{
			printf("wynik dodawania %i\n", dodaj(a, b));
}
		return 0;
		



		int wynik;
		wynik = mnoz(4,5);
		printf("wynik mnozenia: %i\n", wynik);
		return 0;
}


