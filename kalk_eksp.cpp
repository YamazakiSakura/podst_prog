// kalkulator ale w wersji c++

#include <iostream>

using namespace std;

// deklarujemy funkcje przed main


double a, b, wybor; //zmienna globalna



double dodawanie (double a, double b)
{
	return a+b;
}

double odejmowanie (double a, double b)
{
	return a-b;
}

double mnozenie (double a, double b)
{
	return a*b;
}

double dzielenie (double a, double b)
{
	return a/b;
}

double kalk (double a, double b, int wybor)



{

	
	
	cout << "Witam w programie Kalkulator mojego autorstwa" << endl << endl;
	

	


	cout << "Podaj pierwszą liczbę:" << endl;
	cin >> a;
	

	cout << "Podaj drugą liczbę:" << endl;	
	cin >> b;
	
	cout << "Podaj rodzaj działania, które chcesz wykonać" << endl << endl << "1 - dodawanie" << endl << "2 - odejmowanie" << endl; 
	cout << "3 - mnożenie " << endl << "4 - Dzielenie" << endl << "5 - Wyjście" << endl;
	cin >> wybor;
	
	cout << "Wynik to: ";

	switch (wybor)
	{
		case 1:
			cout << dodawanie(a,b) << endl;
			break;

		case 2:
			cout << odejmowanie(a, b) << endl;
			break;

		case 3:
			cout << mnozenie(a, b) << endl;
			break;

		case 4:
			cout << dzielenie(a, b) << endl;
			break;

		case 5:
			exit(0);
	
	}

	


}






int main()
{
	do
	{
	kalk(a, b, wybor);


	getchar();
	} while (0<1);

getchar();

}
