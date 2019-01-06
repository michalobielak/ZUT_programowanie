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
			return true;
		}
	}
	return false;
}

//zad 4.3 Napisaæ metodê bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracaj¹c¹ informacjê, czy dwie tablice
//podane jako parametr s¹ identyczne, tj. czy maj¹ tak¹ sam¹ d³ugoœæ i czy na ka¿dym indeksie wystêpuje taki sam
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

//zad 4.4 Napisaæ metodê char * reverseString(char*s), która ZWRÓCI (a nie wypisze!) string, który jest odwróconym
//stringiem przekazanym jako pierwszy parametr. Funkcja zaalokuje pamiêæ na nowy ³añcuch i go zwróci. (ca³y
//algorytm nale¿y zaimplementowaæ samodzielnie). Nale¿y go nastêpnie „przechwyciæ" w funkcji main, aby pamiêæ na
//koniec wyczyœciæ
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
	
	
	//Zad 3.4 Pobraæ od u¿ytkownika ³añcuch znaków (dowolna metoda). Przekazaæ go do ka¿dej z metod z 3. czêœci zadañ
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
	
	
	//zad 4.1 Pobraæ od u¿ytkownika liczbê n. Zaalokowaæ pamiêæ na n elementów int i pobraæ je od u¿ytkownika. Wykonaæ na niej metodê printBackwards z 2.2. 
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

	//zad 4.2 Pobraæ od u¿ytkownika liczbê n. Zaalokowaæ pamiêæ na n elementów int i pobraæ je od u¿ytkownika. Nastêpnie
	//zaalokowaæ pamiêæ i utworzyæ tablicê, w której bêd¹ tylko UJEMNE wartoœci z pierwszej tablicy. Na koniec zwolniæ
	//pamiêæ na obie tablice. 
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
