// Zadanie domowe G. Borowik
// NWD wg Euklidesa
// kod wg Tobiasza ;-)



#include <stdio.h>
#include <stdlib.h> // potrzebna do działania polecenia system

int NWD (int a, int b){ //nie jestem pewien czy stawianie klamry w tym miejscu jest ok

	int temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
			
	}
	printf("NWD dla tych liczb wynosi: %d \n", a );
}

int main()

{ //przy funkcji main klamrę stawiam tu... Może powinno być jednolicie?

	system("clear");	
	int a, b, temp;
	printf("Podaj liczbe a: \n");
	scanf("%d", &a);
	printf("Podaj liczbe b: \n");
	scanf("%d", &b);
	NWD(a,b);
	
	return 0;
}

