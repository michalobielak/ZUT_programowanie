#include <iostream>
#include <math.h>
using namespace std;

void clear()
{
	system("cls");
}

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

//Napisaæ prosty kalkulator.
//Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech: mno¿enie, dzielenie, dodawanie,odejmowanie).
//Wymagane jest utworzenie prostego menu u¿ytkownika. Uwaga - nale¿y pamiêtaæ o u³amkach (1/3 powinno daæ 0.33, a nie0)
void zadanie1_6(){
	float wynik, a, b;
	char oper;
	cout<<"Zadanie 1.6"<<endl;
	cout<<"Wprowadz pierwsza liczbe: ";
	cin>>a;
	cout<<"Wprowadz druga liczbe: ";
	cin>>b;
	cout<<"Wprowadz operator dzialania: ";
	cin>>oper;
	switch (oper) {
		case '+': wynik = a + b; break;
		case '-': wynik = a - b; break;
		case '*': wynik = a * b; break;
		case '/': wynik = a / b; break;
		default: cout<<"Bledny znak"<<endl;
	}
	cout<<"Wynik dzialania "<<a<<oper<<b<<" to: "<<wynik<<endl;
	cout<<"Kontynuowaæ? (y/n)";
	cin>>oper;
	switch (oper) {
		case 'y':
			clear();
			zadanie1_6();
			break;
		default:
			break;
	}
}

//Zapoznac sie z petla while.
//Petla ta sluzy do wielokrotnego wykonania fragmentu kodu przez NIEZNANA Z GORY ilosc razy.
//Petla wykonuje sie zawsze, jesli warunek jest prawdziwy (ewaluowany do true).
//Napisac petle, w ktorej uzytkownik podaje liczbe x. Nalezy wyswietlic te liczbe.
//Jezeli uzytkownik poda 0, nalezy zakonczyc program.
void zadanie2_1()
{
	int a;
	cout<<"Zadanie 2.1"<<endl;
	do {
		cout<<"Podaj liczbe: ";
		cin>>a;
	} while(a != 0);
}

//Przerobic kalkulator z zadania 1.6.
//Teraz po kazdym dzialaniu program powinien spytac uzytkownika, czy ten chce powtorzyc wszystko od poczatku.
//Jesli tak - restartujey kalkulator i zaczynamy od nowa.
//Jesli nie - konczymy program.
void zadanie2_2()
{
	float wynik, a, b;
	char oper;
	cout<<"Zadanie 2.2"<<endl;
	do {
		cout<<"Wprowadz pierwsza liczbe: ";
		cin>>a;
		cout<<"Wprowadz druga liczbe: ";
		cin>>b;
		cout<<"Wprowadz operator dzialania: ";
		cin>>oper;
		switch (oper) {
			case '+': wynik = a + b; break;
			case '-': wynik = a - b; break;
			case '*': wynik = a * b; break;
			case '/': wynik = a / b; break;
			default: cout<<"Bledny znak"<<endl;
		}
		cout<<"Wynik dzialania "<<a<<oper<<b<<" to: "<<wynik<<endl;
		cout<<"Kontynuowaæ? (y/n)";
		cin>>oper;
	} while (oper == 'y');
};

//Pobrac od uzytkownika liczbe x.
//Nalezy wyswietlic wszystkie kolejne potegi liczby x. Zakonczyc program, kiedy liczba przekroczy 100000
void zadanie2_3()
{
	int x, wynik;
	cout<<"Zadanie 2.3"<<endl;
	cout<<"Podaj liczbe: ";
	cin>>x;
	wynik = 1;
	do {
		wynik = wynik * x;
		cout<<wynik<<", ";
	} while (wynik <= 100000);
}

// Pobrac od uzytkownika liczbe x.
//Jesli liczba jest niedodatnia - nalezy zakonczyc program.
//Nastepnie nalezy wyswietlac kolejno (wnowej linii) wszystkie liczby mniejsze od x,
//az osiagniete zostanie 0.
void zadanie2_4()
{
	int x;
	cout<<"Zadanie 2.4"<<endl;
	cout<<"Podaj liczbe: ";
	cin>>x;
	if (x > 0) {
		do {
			cout<<x--<<endl;
		} while (x >= 0);
	}
}

//Zapoznaæ siê z instrukcjami continue; i break;. Pierwsza s³u¿y do zakoñczenia iteracji i przejœcia do nastêpnej,
//a druga natychiast koñczy pêtlê. Przerobiæ program z zadania 1.4,
//aby wyœwietla³ tylko parzyste liczby (u¿yæ if oraz continue). Jeœli liczba wynosi 40, nale¿ywyjœæ z pêtli i zakoñczyæ program
void zadanie2_5()
{
	int x;
	cout<<"Zadanie 2.5"<<endl;
	cout<<"Podaj liczbe: ";
	cin>>x;
	if (x > 0) {
		do {
			if (x % 2){	
				x--;		
				continue;
			} else {
				cout<<x--<<endl;
			}
		
		} while (x >= 0);
	}
}

// Napisaæ pêtlê for, która wyœwietli cyfry od 0 do 9.
void zadanie2_6()
{
	cout<<"Zadanie 2.6"<<endl;
	for (int i = 1; i<=9; i++) {
		cout<<i<< ' ';
	}
}

//Pobraæ od u¿ytkownika liczby x i y. Zak³adamy, ¿e y > x (zawsze, nie musimy tego sprawdzaæ).
//Za pomoc¹ pêtli for wypisaæ liczby miêdzy x a y (do przemyœlenia - co jest stanem pocz¹tkowym, a co warunkiem zakoñczenia pêtli?)
void zadanie2_7()
{
	int x, y;
	cout<<"Zadanie 2.7"<<endl;
	cout<<"Podaj liczbe: ";
	cin>>x;	
	cout<<"Podaj liczbe: ";
	cin>>y;
	for (x;x<y;++x) {
		cout<<x<< ' ';
	}		
}

//Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisaæ wszystkie liczby mniejsze od x, ale wiêksze ni¿ 0
void zadanie2_8()
{
	int x;
	cout<<"Zadanie 2.8"<<endl;
	cout<<"Podaj liczbe: ";
	cin>>x;
	for (x;x>0;--x) {
		cout<<x<< ' ';
	}
}

//Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisywaæ CO TRZECI¥ liczbê wiêksz¹ od x.
//Pêtla powinna siê zakoñczyæ, jeœliliczba przekroczy 100. Uwaga - proszê nie u¿ywaæ operacji continue i break, a sterowaæ tylko parametrami pêtli.
void zadanie2_9()
{
	int x;
	cout<<"Zadanie 2.9"<<endl;
	cout<<"Podaj liczbe: ";
	cin>>x;
	for (x; x<=100; x+=3){
		cout<<x<< ' ';
	}
	
}
int main() {
	//zadanie1_1();
	//system("pause");
	//clear();
	//zadanie1_2();
	//system("pause");
	//clear();
	//zadanie1_3();
	//system("pause");
	//clear();
	//zadanie1_4();
	//system("pause");
	//clear();
	//zadanie1_5();
	//system("pause");
	//clear();
	//zadanie1_6();
	//system("pause");
	//clear();
	//zadanie2_1();
	//system("pause");
	//clear();
	//zadanie2_2();
	//system("pause");
	//clear();
	//zadanie2_3();
	//system("pause");
	//clear();
	//zadanie2_4();
	//system("pause");
	//clear();
	//zadanie2_5();
	//system("pause");
	//clear();
	//zadanie2_6();
	//system("pause");
	//clear();
	//zadanie2_7();
	//system("pause");
	//clear();
	//zadanie2_8();
	//system("pause");
	//clear();
	zadanie2_9();
	system("pause");
	return 0;
}
