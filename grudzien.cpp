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

//zad 3.1 Napisaæ metodê int getLength(char *str) , w której W£ASNORECZNIE (nie wolno korzystaæ z metody strlen() )
//przeliczony zostanie rozmiar ³añcucha (bez null-terminatora). Dla przyk³adu dla „Hello!" wynik powinien wynosiæ 6. 
int getLength(char *tab){
	int i=0;
	while(tab[i]!= '\0'){
		i++;
	}
	return i;
}

//zad 3.2 Napisaæ metodê void Reverse (char *str) , która wypisze ³añcuch znaków od koñca (zakaz u¿ywania strlen,
//mo¿na uzyæ metodê z zadania 3.1.) 
void Reverse(char *tab){
	int dlugosc = getLength(tab);
	for(int i = dlugosc - 1; i >= 0; i--){
		cout << tab[i];
	}
}
//zad 3.3 Napisaæ metodê bool containsDigits(char * str), która zwróci informacjê, czy w danym stringu znajduje siê
//jakakolwiek cyfra. Dla przyk³adu : „asdfgzxcv" -> false, „asdf5asdf" -> true
bool containsDigits(char *tab){
	int dlugosc = getLength(tab);
	for(int i = 0; i < dlugosc; i++){
		if((int)tab[i] >= 48 && (int)tab[i] <= 57){
			cout << i << endl;
			cout << tab[i];
			return true;
		}
	}
	return false;
}
int main() {
	/*
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
	
	//zad 2.5 Zaimplementowaæ algorytm sortowania b¹belkowego (w funkcji main(), nie ma potrzeby tworzenia dodatkowej funkcji). Algorytm powinien posortowaæ dowolnie du¿¹ tablicê w kolejnoœci niemalej¹cej.
	for(int i = 0; i < wymiar; i++){
		for(int j = 1; j < wymiar - i; j++){
			if(tab[j-1] > tab[j]){
				swap(tab[j-1], tab[j]);
			}
		}
	}
	*/
	char *str = "Hello!";
	cout << "dlugosc slowa " << str << " to: " << getLength(str) << endl;
	Reverse(str);
	cout << endl;
	if(containsDigits(str)){
		cout << "jest liczba";
	} else {
		cout << "nie ma liczby";
	}
	return 0;
}
