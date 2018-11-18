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

//Pobrac ud uzytkownika 3 liczby (x1, x2, x3). Wyswietlic informacje, ktora z tych liczb jest najwieksza.
void zadanie1_5()
{
	int x1, x2, x3;
	cout<<"Zadanie 1.5"<<endl;
	cout<<"Wpisz pierwsza liczbe: ";
	cin>>x1;
	cout<<"Wpisz druga liczbe: ";
	cin>>x2;
	cout<<"Wpisz trzecia liczbe: ";
	cin>>x3;
	cout<<"Najwieksza liczba to: ";
	if (x1 > x2) {
		if (x1 > x3){
			cout<<x1<<" (pierwsza)";
		} else {
			cout<<x3<<" (trzecia)";
		}
	} else {
		if (x2 > x3){
			cout<<x2<<" (druga)";
		} else {
			cout<<x3<<" (trzecia)";
		}
	}
	cout<<endl;
}
int main() {
	zadanie1_1();
	zadanie1_2();
	zadanie1_3();
	zadanie1_4();
	zadanie1_5();
	return 0;
}
