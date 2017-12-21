// pierwszy chyba w c++ "zgadula"

#include <iostream> //nie rozumiem kiedy jakie biblioteki


using namespace std; //chuj wie o co chodzi :-((

// zmienne globalne TU albo ponad using nameblablablabla

	int zm; 
	char pytanie; //deklaracja zmiennej znakowej
	int licznikp=0, licznikn=0, sumap=0, suman=0; //zerowanie zmiennych KONIECZNE! przed zwiększaniem licznika

void spr_p (int zm)

	{
		cout << "liczba parzysta\n";
		licznikp++;
		sumap+=zm;	
	}


void spr_n (int zm)

	{
		cout << "liczba nieparzysta" << endl;
		licznikn++;
		suman+=zm;	
	}


int main(int argc, char** argv) // tu coś kumam funkcja główna a w nawiasach

{
	
	// zmienne lokalne (wewnatrz int main)
	

	do
	{
		cout << "Podaj liczbe" << endl;
		cin >> zm;

		if (zm % 2 == 0)
		
		{
  		spr_p(zm);
		}

		else

		{
		spr_n(zm);	
		}
		cout << "Czy chcesz kontynuować ? - T\n";
		cin >> pytanie;
	
	} 
	
	while ( toupper(pytanie) == 'T' );
	cout << sumap << endl << licznikp << endl << suman << endl << licznikn << endl;

	return 0;


} //pilnuj klamer i return 0 fiutku







