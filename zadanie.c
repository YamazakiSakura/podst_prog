include <stdio.h>
#include <stdbool.h>

#define N 10	//polecenie dla prerocesora

bool dalej = true;
int i, gdzie = -1;
int szukany = 333;
int tab[N] = {0, 1, 333};


void main()

{

	for (i = 0; i < N && dalej; ++i)
	{
		if ( tab[i] == szukany )
		{
			dalej = false;
		}
	}

	gdzie = i;	// jaka jest wartość 'gdzie' ?
	printf(gdzie)

}

