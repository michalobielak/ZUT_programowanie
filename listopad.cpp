#include <iostream>
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
void zadanie1_2(){
	cout<<"Zadanie 1.2"<<endl;
	int i = 1;
	printf("wartosc zmiennej typu int: %d \n", i);
}
int main() {
	zadanie1_1();
	zadanie1_2();
	return 0;
}
