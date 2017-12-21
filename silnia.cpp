//program do liczenia silni dylewski 05-12-2017

#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int sil (int liczba) //poza funkcją main tak jakpowinno być
{
    if (liczba<2) return liczba;
    return liczba*sil(liczba-1);
}
 

int main()

{
    int a;
 
    cout << "podaj liczbe" << endl;
    cin >> a;
 
    cout << sil(a) << endl; //wyświetla wynik funkcji sil(a)
 
   
    return(0);
}

