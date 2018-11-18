#include <iostream>
#include <math.h>
using namespace std;

// Zadeklarowac zmienne typu int, float, char. Przypisac do nich wartosc, wyswietlic je na ekran
void zadanie1_1 ()
{
	cout<<"Zadanie 1.1"<<endl;
	int i = 1;
	float f = 1.1;
	char c = 'a';
	cout<<"wartosc zmiennej typu int: "<<i<<endl;
	cout<<"wartosc zmiennej typu float: "<<f<<endl;
	cout<<"wartosc zmiennej typu char: "<<c<<endl;
}

//Wyswietlic zmienna typu int na ekran. Nalezy uzyc metody printf i konstrukcji %d
void zadanie1_2()
{
	cout<<"Zadanie 1.2"<<endl;
	int i = 1;
	printf("wartosc zmiennej typu int: %d \n", i);
}

//Pobrac od uzytkownika liczbe x. Wyswietlic kwadrat liczby x.
void zadanie1_3()
{
	cout<<"Zadanie 1.3"<<endl;
	int x;
	cout<<"Wpisz liczbe: ";
	cin>>x;
	cout<<"Kwadrat podanej liczby to: "<<pow(x, 2)<<endl;
}

//Zapoznac sie z instrukcjami warunkowymi (if, else if, else oraz switch).
//Pobrac od uzywkownika liczbe i wyswietlic informacje, czy jest ona: mniejsza, wieksza, czy rowna 0
void zadanie1_4()
{
	cout<<"Zadanie 1.4"<<endl;
	int x;
	cout<<"Wpisz liczbe: ";
	cin>>x;
	cout<<"Podana liczba jest ";
	if (x < 0) {
		cout<<"mniejsza od zera";
	} else if (x > 0) {
		cout<<"wieksza od zera";
	} else {
		cout<<"rowna zero";
	}
	cout<<endl;
}
int main() {
	zadanie1_1();
	zadanie1_2();
	zadanie1_3();
	zadanie1_4();
	return 0;
}
