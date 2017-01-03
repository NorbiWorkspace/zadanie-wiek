#include <iostream>
#include <windows.h>

using namespace std;

char option;
int wiek, podniesiony, porownaj;

void check(int wybor, int wait) {
    Sleep(wait*1000);
	if (wybor == 0) {
		system("cls");
		cout << "Co chcesz zrobic?" << endl;
		cout << "1) wyswietl moj wiek" << endl;
		cout << "2) podnies moj wiek" << endl;
		cout << "3) wyswietl podniesiony wiek" << endl;
		cout << "4) porownaj moj wiek do innego" << endl;
		cout << "5) podaj rok urodzenia" << endl;
		cout << "6) podaj, czy jestem pelnoletni" << endl;
		cout << "Wpisz opcje nr: ";
		cin >> wybor;
	}
	if (wybor == 1) {
		cout << "Twoj wiek: " << wiek << " lat";
		check(0, 5);
	}
	if (wybor == 2) {
        cout << "Podaj, o ile chcesz podniesc wiek: ";
        cin >> podniesiony;
        wiek=wiek+podniesiony;
        cout << "Podniosles swoj wiek o " << podniesiony << " lat." << endl;
        cout << "Suma twojego i podniesionego wieku to: " << wiek << " lat.";
		check(0, 5);
	}
	if (wybor == 3) {
        cout << "Twoj podniesiony wiek to: " << wiek+podniesiony << " lat." << endl;
		check(0, 5);
	}
	if (wybor == 4) {
        cout << "Podaj wiek, ktory chcesz porownac: ";
        cin >> porownaj;
        cout << "Porownywanie wieku: " << wiek << " i " << porownaj << endl;
        if (wiek<porownaj) {
            cout << "Jestes mlodszy o: " << porownaj-wiek << " lat.";
        }
        if (wiek==porownaj) {
            cout << "Jestes tego samego wieku.";
        }
        if (wiek>porownaj) {
            cout << "Jestes starszy o: " << wiek-porownaj << " lat.";
        }
		check(0, 5);
    }
    if (wybor == 5) {
        cout << "Jest rok 2017." << endl;
        cout << "Twoj rok urodzenia: " << 2017-wiek;
        check (0, 5);
    }
    if (wybor == 6) {
        if (wiek<18) {
            cout << "Nie jestes pelnoletni. Brakuje ci: " << 18-wiek << " lat.";
        }
        if (wiek>=18) {
            cout << "Jestes pelnoletni juz od: " << wiek-18 << " lat." << endl;
        }
        check (0, 5);
    }
}
int main()
{
	system("cls");
    cout << "Podaj swoj wiek (rocznikowo): ";
    cin >> wiek;
    cout << endl;
	check(0, 1);
    return 0;
}
