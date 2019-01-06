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
			return true;
		}
	}
	return false;
}

//zad 4.3 Napisa� metod� bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracaj�c� informacj�, czy dwie tablice
//podane jako parametr s� identyczne, tj. czy maj� tak� sam� d�ugo�� i czy na ka�dym indeksie wyst�puje taki sam
//element.
bool AreArraysIdentical(int *a1, int s1, int *a2, int s2){
	if(s1 == s2){
		for(int i = 0; i < s1; i++){
			if (a1[i] != a2[i])
			return false;
		}
		return true;
	} else {
		return false;
	}
} 

//zad 4.4 Napisa� metod� char * reverseString(char*s), kt�ra ZWR�CI (a nie wypisze!) string, kt�ry jest odwr�conym
//stringiem przekazanym jako pierwszy parametr. Funkcja zaalokuje pami�� na nowy �a�cuch i go zwr�ci. (ca�y
//algorytm nale�y zaimplementowa� samodzielnie). Nale�y go nast�pnie �przechwyci�" w funkcji main, aby pami�� na
//koniec wyczy�ci�
char *reverseString(char *s){
	int x = getLength(s);
	int j = 0;
	char *wynik;
	wynik = (char *)malloc(x * sizeof(char));
	for(int i = x-1; i >= 0; i--){
		wynik[j] = s[i];
		j++; 
	}
	return wynik;
}
int main() {
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
	
	
	//Zad 3.4 Pobra� od u�ytkownika �a�cuch znak�w (dowolna metoda). Przekaza� go do ka�dej z metod z 3. cz�ci zada�
	char str[5];
	cout << "Podaj lancuch znakow" << endl;
	for(int i = 0; i < 5; i++) {
    	cout << "Znak o id " << i <<": ";
    	cin >> str[i];
	}
	cout << str;
	// metoda z 3.1
	cout << "dlugosc slowa " << str << " to: " << getLength(str) << endl;
	// metoda z 3.2
	Reverse(str);
	cout << endl;
	// metoda z 3.3
	if(containsDigits(str)){
		cout << "jest liczba";
	} else {
		cout << "nie ma liczby";
	}
	
	
	//zad 4.1 Pobra� od u�ytkownika liczb� n. Zaalokowa� pami�� na n element�w int i pobra� je od u�ytkownika. Wykona� na niej metod� printBackwards z 2.2. 
	{
		int n;
		cout << "Podaj wymiar tablicy: ";
		cin >> n;
		int *tab;
    	tab = (int *)malloc(n * sizeof(int));
    	for(int i = 0; i < n; i++){
    		cout << "Podaj element " << i+1 << ": ";
    		cin >> tab[i];
		}
		printBackwards(tab, n);
	}

	//zad 4.2 Pobra� od u�ytkownika liczb� n. Zaalokowa� pami�� na n element�w int i pobra� je od u�ytkownika. Nast�pnie
	//zaalokowa� pami�� i utworzy� tablic�, w kt�rej b�d� tylko UJEMNE warto�ci z pierwszej tablicy. Na koniec zwolni�
	//pami�� na obie tablice. 
	{
		int n;
		int licznik = 0;
		cout << "Podaj wymiar tablicy: ";
		cin >> n;
		int *tab;
		int *tab2;
    	tab = (int *)malloc(n * sizeof(int));
    	for(int i = 0; i < n; i++){
    		cout << "Podaj element " << i+1 << ": ";
    		cin >> tab[i];
		}
		for(int i = 0; i < n; i++){
			if(tab[i] < 0) {
				licznik++;
			}
		}
		if (licznik > 0) {
			tab2 = (int *)malloc(licznik * sizeof(int));
			int j = 0;
			for(int i = 0; i < n; i++){
			if(tab[i] < 0) {
					tab2[j] = tab[i];
					j++;
				}
			}
		}
		cout << "liczby ujemne: ";
		for(int i = 0; i < licznik; i++){
			cout << tab2[i] << ", ";
		}
		free(tab);
		free(tab2);
	}
	
	{
		char *str;
		str = (char *)malloc(10 * sizeof(char));
		for(int i = 0; i < 10; i++){
			cout << "Podaj element " << i+1 << ": ";
    		cin >> str[i];
		}
		char * result = reverseString(str);
		printf("%s", result);
		free(str);
		free(result);
	}
	return 0;
}
