//to jest program zgadula

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int szukana, zgadywana, licznik=0;

int main()

{

	srand (time (NULL));
	szukana = (rand () % 100); //wybiera pseudolosowo od 0 do 99

	cout << szukana << endl; 
	cout << "Zgadnij liczbę z zakresu od 0 do 99" << endl;


	do
	{	
	
		cin >> zgadywana;

	
	
		if (zgadywana>szukana)
		{
		cout << "Twoja liczba jest większa. Podaj mniejszą liczbę" << endl;
		licznik++;
		}		
	
		else if (zgadywana<szukana)
		{
		cout << "Twoja liczba jest mniejsza. Podaj większą liczbę" << endl;
		licznik++;		
		}

		

		
	} while(zgadywana!=szukana);
	
	
	cout << "Zgadłeś" << endl;
	cout << "Po " << licznik << " próbach" << endl;
	cout << "Gratulacje!!!";
	

return 0;

}

