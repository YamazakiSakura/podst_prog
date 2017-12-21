//program do zasysania danych do tablic

#include <iostream>

using namespace std;

int wybor;
string tab_n [10];
char tab_c [10];

char wprowadzanie_n () 	//funcja wypełniania tabeli nazwiskami

{
 	
	string tab_n [10];
	char i, x;
	cout << "Wprowadź nazwiskaw zatwierdzając każdorazowo  klawiszem enter " << endl;

		for( i=0;i<10;i++)
			{
		cout << endl;
		cin >> tab_n [i]; //spacja PRZED % pomaga żeby entera nie liczył
		fflush(stdin);	//czyszcenie wejścia aby enter nie był kolejnym znakiem		
			}
		for( x=0;x<10;x++)
			{
		cout << tab_n [x] << endl;
			}

}


char wprowadzanie_c () 	//funcja wypełniania tabeli nazwiskami

{
 	
	char tab_c [10];
	char i, x;
	cout << "Wprowadź znaki zatwierdzając każdorazowo  klawiszem enter " << endl;

		for( i=0;i<10;i++)
			{
		cout << endl;
		cin >> tab_c [i]; //spacja PRZED % pomaga żeby entera nie liczył
		fflush(stdin);	//czyszcenie wejścia aby enter nie był kolejnym znakiem		
			}
		for( x=0;x<10;x++)
			{
		cout << tab_c [x] << endl;
			}

}




int main()

{



	system ("clear");
	do
	{


	
	
	cout << "Podaj rodzaj działania, które chcesz wykonać" << endl << endl << "1 - wypełnianie tablicy nazwisk" << endl << "2 - wypełnianie tablicy znakowej" << endl; 
	cout << "3 - trzecia opcja " << endl << "4 - czwarta opcja" << endl << "5 - Wyjście" << endl;
	cin >> wybor;
	
	

	switch (wybor)
	{
		case 1:
			cout << wprowadzanie_n() << endl;
			break;

		case 2:
			cout << wprowadzanie_c() << endl;
			break;
/*
		case 3:
			cout << mnozenie(a, b) << endl;
			break;

		case 4:
			cout << dzielenie(a, b) << endl;
			break; */

		case 5:

			system ("clear");
			cout << "Dziękuję za korzystanie z programu" << endl << endl;
			exit(0);
	
	}

	} while (0<1);






return 0;

}
