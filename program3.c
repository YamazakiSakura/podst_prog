#include <stdio.h>

/* pierwszy kalkulator */


int mnoz(int a, int b){	return a*b; }
int dodaj(int a, int b){return a+b; }

/* dodatkowe linie dla odejmowania i dzielenia */

int odejmij(int a, int b){return a-b; }
int dziel(int a, int b){return a/b; }

int main(void)
{
		int a=2, b=5; /*deklaracja wraz z inicjalizacją */
		char wybor ='*';
		
		scanf("%c", &wybor);

/* taki mam pomysł na to, bez else */

		if(wybor  == '*'){ printf("wynik mnozenia %i\n", mnoz(a, b)); }
		if(wybor  == '+'){ printf("wynik dodawania %i\n", dodaj(a, b)); }
		if(wybor  == '-'){ printf("wynik odejmowania %i\n", odejmij(a, b)); }		
		if(wybor  == '/'){ printf("wynik dzielenia %i\n", dziel(a, b)); }

/* teraz linia gdy żaden z warunków nie jest spełniony */

			printf("niewłaściwy znak");
			printf("to była jedyna szansa");
			printf("nara");			
				
		return 0;
		



		int wynik;
		wynik = mnoz(4,5);
		printf("wynik mnozenia: %i\n", wynik);
		return 0;
}


