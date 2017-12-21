#include <stdio.h>
#include <math.h>
	//wstawki w komentarzach w c++
	//#include <iostream>

int main()

{
	float a, b, c, delta;
	printf("podaj wspolczynnik a: "); scanf("%f", &a);
	printf("podaj wspolczynnik b: "); scanf("%f", &b);
	printf("podaj wspolczynnik c: "); scanf("%f", &c);
	delta = b*b - 4 * a * c;
	printf("Delta to: %f" , delta);


	
	//std::cout << "tekst";
	//std::cin >> a;
	//std::cout << " test " << a;

	return 0;


}


