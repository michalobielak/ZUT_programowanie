#include <iostream>
#include <stdlib.h>
using namespace std;

//zad 2.1 Utworzy� osobn� metod� bool IsSorted(int *, int) realizuj�c� zadanie 1.3
bool isSorted(int *tab, int wymiar){
	for(int i = 0; i < wymiar-2; i++){
		if(tab[i] > tab[i+1]) {
			return false;
		}
	}
	return true;
}

// zad 2.2 Utworzy� metod� void printBackwards(int *a, int s) s�u��c� do wypisania tablicy OD KO�CA
void printBackwards(int *tab, int wymiar){
	for(int i = wymiar-1; i >= 0; i--){
    	cout << tab[i]  << ", ";
	}
}

//zad 2.3 Utworzy� metod� printDots(int *a, int s) wy�wietlaj�c� w nowych liniach tyle kropek, ile znajduje si� w danym elemencie tablicy.
void printDots(int *tab, int wymiar){
	for (int i = 0; i < wymiar; i++){
		for (int j = 1; j <= tab[i]; j++){
			cout <<".";
		}
		cout << endl;
	}
}

//zad 2.4 Utworzy� metod� int Sum(int *a, int s) licz�c� sum� element�w tablicy. 
int Sum(int *tab, int wymiar){
	int sum = 0;
	for(int i = 0; i < wymiar; i++){
		sum +=tab[i];
	}
	return sum;
}

//zad 3.1 Napisa� metod� int getLength(char *str) , w kt�rej W�ASNORECZNIE (nie wolno korzysta� z metody strlen() )
//przeliczony zostanie rozmiar �a�cucha (bez null-terminatora). Dla przyk�adu dla �Hello!" wynik powinien wynosi� 6. 
int getLength(char *tab){
	int i=0;
	while(tab[i]!= '\0'){
		i++;
	}
	return i;
}

//zad 3.2 Napisa� metod� void Reverse (char *str) , kt�ra wypisze �a�cuch znak�w od ko�ca (zakaz u�ywania strlen,
//mo�na uzy� metod� z zadania 3.1.) 
void Reverse(char *tab){
	int dlugosc = getLength(tab);
	for(int i = dlugosc - 1; i >= 0; i--){
		cout << tab[i];
	}
}
//zad 3.3 Napisa� metod� bool containsDigits(char * str), kt�ra zwr�ci informacj�, czy w danym stringu znajduje si�
//jakakolwiek cyfra. Dla przyk�adu : �asdfgzxcv" -> false, �asdf5asdf" -> true
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
	// zad 1.1 Utworzy� 5-cio elementow� tablic� typu int. Pobra� od u�ytkownika 5 element�w i doda� je do tablicy.
	int x;
	int wymiar = 5;
	int *tab;
    tab = (int *)malloc(wymiar * sizeof(int));
    for(int i = 0; i < wymiar; i++) {
    	printf ("Podaj cyfre numer %d: ",i+1);
    	cin >> x;
    	tab[i] = x;
	}
	// Nastepnie wy�wietli� najwi�ksz� liczb� z tablicy (algorytm do samodzielnej implementacji). 
	int maks = tab[0];
	for (int i=1; i < wymiar; i++){
    if (tab[i] > maks){
       maks = tab[i];}
    }
    cout << "Najwiejsza liczba to: " << maks << endl;
    //zad 1.2 Wy�wietli� w p�tli tablice z zadania 1.1 od pocz�tku i od ko�ca (dwie p�tle) 
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
	//zad 1.3 Napisa� algorytm sprawdzaj�cy, czy tablica jest posortowana w kolejno�ci niemalej�cej 
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
	
	//zad 2.5 Zaimplementowa� algorytm sortowania b�belkowego (w funkcji main(), nie ma potrzeby tworzenia dodatkowej funkcji). Algorytm powinien posortowa� dowolnie du�� tablic� w kolejno�ci niemalej�cej.
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
