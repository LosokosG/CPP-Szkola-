#include <iostream>
using namespace std;


int NWD(int a, int b) {
	while (a != b) {
		if (a < b) { b -= a; }
		else { a -= b; }
	}
	return a;
}

int NWW(int a, int b) {

	int wynik = a * b / (NWD(a, b));

	return wynik;
}

int main()
{
	int a;
	int b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << endl << "Podaj druga liczbe: ";
	cin >> b;

	int wynikNWD = NWD(a, b);
	int wynikNWW = NWW(a, b);

	cout << "Najwiekszy wspolny dzielnik to: " << wynikNWD << endl;
	cout << "Najmniejsza wspolna wielokrotnosc: " << wynikNWW << endl;

}
