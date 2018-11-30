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

//Napisa� prosty kalkulator.
//Nale�y pobra� od u�ytkownika 2 liczby oraz operator (jeden z czterech: mno�enie, dzielenie, dodawanie,odejmowanie).
//Wymagane jest utworzenie prostego menu u�ytkownika. Uwaga - nale�y pami�ta� o u�amkach (1/3 powinno da� 0.33, a nie0)
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
	cout<<"Kontynuowa�? (y/n)";
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
		cout<<"Kontynuowa�? (y/n)";
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

//Zapoznac sie z instrukcjami continue; i break;. Pierwsza sluzy do zakonczenia iteracji i przejscia do nastepnej,
//a druga natychiast konczy petle. Przerobic program z zadania 1.4,
//aby wyswietlal tylko parzyste liczby (uzy� if oraz continue). Jesli liczba wynosi 40, nalezy wyjsc z petli i zakonczyc program
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

// Napisac petle for, ktora wyswietli cyfry od 0 do 9.
void zadanie2_6()
{
	cout<<"Zadanie 2.6"<<endl;
	for (int i = 1; i<=9; i++) {
		cout<<i<< ' ';
	}
}

//Pobrac od uxytkownika liczby x i y. Zakladamy, �e y > x (zawsze, nie musimy tego sprawdzac).
//Za pomoca petli for wypisac liczby miedzy x a y (do przemyslenia - co jest stanem poczatkowym, a co warunkiem zakonczenia petli?)
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

//Pobrac od uxytkownika liczbe x. Za pomoca petli for wypisac wszystkie liczby mniejsze od x, ale wieksze niz 0
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

//Pobrac od uzytkownika liczbe x. Za pomoca petli for wypisywac CO TRZECIA liczbe wieksza od x.
//Petla powinna sie zakonczyc, jesli liczba przekroczy 100. Uwaga - prosze nie uzywac operacji continue i break, a sterowac tylko parametrami petli.
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

//Napisac metode void NewLine(). Powinna ona wypisac na ekran pojedyncza pusta linie. Uzyc tej metod� w main()
void Newline()
{
	cout<<""<<endl;
}

// Napisac metode void NewLines(int count). Powinna ona wypisa� tyle nowych linii, ile zostalo podanych W PARAMETRZE count (nalezy u�y� petli for). Uzyc metode w main()
void Newlines(int x)
{
	for (int i=1; i<=x;i++) {
		cout<<""<<endl;
	}
}

//Napisac metode void WriteBiggerNumber(int x, int y).
//Metoda powinna pobrac 2 parametry i zwrocic wiekszy z nich. Wykorzystac funckje w metodzie main().
//UWAGA - pobieranie liczb od uzytkownika powinno odbyc sie w funkcji main(), a NIE w WriteBiggerNumber! Do funkcji nalezy jedynie przeslac pobrane wczesniej parametry.
int WriteBiggerNumber(int x, int y)
{
	if (x >= y) {
		return x;
	} else {
		return y;
	}
}

//Napisac metode Multiply(int x, int y).
//Metoda powinna ZWROCIC (s�owo kluczowe return) iloczyn dwoch parametrow.
//Uwaga! Metoda NIE POWINNA wypisywac wyniku - powinien on by� wyswietlony w funkcji main
int Multiply(int x, int y)
{
	return x*y;
}
int main() {
	int x, y;
	zadanie1_1();
	system("pause");
	clear();
	zadanie1_2();
	system("pause");
	clear();
	zadanie1_3();
	system("pause");
	clear();
	zadanie1_4();
	system("pause");
	clear();
	zadanie1_5();
	system("pause");
	clear();
	zadanie1_6();
	system("pause");
	clear();
	zadanie2_1();
	system("pause");
	clear();
	zadanie2_2();
	system("pause");
	clear();
	zadanie2_3();
	system("pause");
	clear();
	zadanie2_4();
	system("pause");
	clear();
	zadanie2_5();
	system("pause");
	clear();
	zadanie2_6();
	system("pause");
	clear();
	zadanie2_7();
	system("pause");
	clear();
	zadanie2_8();
	system("pause");
	clear();
	zadanie2_9();
	system("pause");
	cout<<"Zadanie 3.1"<<endl;
	Newline();
	system("pause");
	clear();
	cout<<"Zadanie 3.2"<<endl;
	Newlines(4);
	system("pause");
	clear();
	cout<<"Zadanie 3.3"<<endl;
	cout<<"Podaj liczbe: ";
	cin>>x;
	cout<<"Podaj liczbe: ";
	cin>>y;
	cout<<WriteBiggerNumber(x, y)<<endl;
	system("pause");
	clear();
	cout<<"Zadanie 3.4"<<endl;
		cout<<"Podaj liczbe: ";
	cin>>x;
	cout<<"Podaj liczbe: ";
	cin>>y;
	cout<<Multiply(x, y)<<endl;
	system("pause");
	clear();
	return 0;
}
