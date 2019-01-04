#include <iostream>
#include <stdlib.h>
using namespace std;

//zad 2.1 Utworzyæ osobn¹ metodê bool IsSorted(int *, int) realizuj¹c¹ zadanie 1.3
bool isSorted(int *tab, int wymiar){
	for(int i = 0; i < wymiar-2; i++){
		if(tab[i] > tab[i+1]) {
			return false;
		}
	}
	return true;
}

// zad 2.2 Utworzyæ metodê void printBackwards(int *a, int s) s³u¿¹c¹ do wypisania tablicy OD KOÑCA
void printBackwards(int *tab, int wymiar){
	for(int i = wymiar-1; i >= 0; i--){
    	cout << tab[i]  << ", ";
	}
}

//zad 2.3 Utworzyæ metodê printDots(int *a, int s) wyœwietlaj¹c¹ w nowych liniach tyle kropek, ile znajduje siê w danym elemencie tablicy.
void printDots(int *tab, int wymiar){
	for (int i = 0; i < wymiar; i++){
		for (int j = 1; j <= tab[i]; j++){
			cout <<".";
		}
		cout << endl;
	}
}

//zad 2.4 Utworzyæ metodê int Sum(int *a, int s) licz¹c¹ sumê elementów tablicy. 
int Sum(int *tab, int wymiar){
	int sum = 0;
	for(int i = 0; i < wymiar; i++){
		sum +=tab[i];
	}
	return sum;
}
int main() {
	// zad 1.1 Utworzyæ 5-cio elementow¹ tablicê typu int. Pobraæ od u¿ytkownika 5 elementów i dodaæ je do tablicy.
	int x;
	int wymiar = 5;
	int *tab;
    tab = (int *)malloc(wymiar * sizeof(int));
    for(int i = 0; i < wymiar; i++) {
    	printf ("Podaj cyfre numer %d: ",i+1);
    	cin >> x;
    	tab[i] = x;
	}
	// Nastepnie wyœwietliæ najwiêksz¹ liczbê z tablicy (algorytm do samodzielnej implementacji). 
	int maks = tab[0];
	for (int i=1; i < wymiar; i++){
    if (tab[i] > maks){
       maks = tab[i];}
    }
    cout << "Najwiejsza liczba to: " << maks << endl;
    //zad 1.2 Wyœwietliæ w pêtli tablice z zadania 1.1 od pocz¹tku i od koñca (dwie pêtle) 
    cout << "Od poczatku: ";
    for(int i = 0; i < wymiar; i++){
    	cout << tab[i]  << ", ";
	}
	cout << endl;
	cout << "Od konca: ";
	for(int i = wymiar-1; i >= 0; i--){
    	cout << tab[i]  << ", ";
	}
	cout << endl;
	//zad 1.3 Napisaæ algorytm sprawdzaj¹cy, czy tablica jest posortowana w kolejnoœci niemalej¹cej 
	bool isSort = 1;
	for(int i = 0; i < wymiar-2; i++){
		if(tab[i] > tab[i+1]) { //w kolejnosci niemalejacej rozumiem, ze element tab[i] moze byc rowny tab[i+1], jesli nie toarunek powinien wygladac tak: tab[i] >= tab[i+1]
			isSort = 0;
		}
	}
	if(isSort){
		cout << "Jest posortowana niemalejaco" << endl;
	} else {
		cout << "Nie jest posortowana niemalejaco" << endl;
	}
	
	
	if(isSorted(tab, wymiar)){
		cout << "Jest posortowana niemalejaco" << endl;
	} else {
		cout << "Nie jest posortowana niemalejaco" << endl;
	}
	
	cout << "Wypisywanie od konca za pomoca funkcji printBackwards: ";
	printBackwards(tab, wymiar);
	cout << endl;
	printDots(tab, wymiar);
	
	cout << "Suma elementow tablicy: " << Sum(tab, wymiar) << endl;
	return 0;
}
