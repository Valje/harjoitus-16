// Valtteri Ahonen
// Harjoitus 16
// 8.10.2013

#include <iostream>
using namespace std;

// Esitell„„n tietuerakenne HENK.
struct HENK{
	char etun[20], sukun[20], osoite[40], postin[10];
	float matka;
	int keng;
};

int main()
{
	// Esitell„„n tietue eka ja sitten kysell„„n siihen kaikki tiedot.
	HENK eka;
	cout << "Etunimi: ";
	cin >> ws >> eka.etun;
	cout << "\nSukunimi: ";
	cin >> ws >> eka.sukun; 
	cout << "\nKoulumatka (km): ";
	cin >> ws >> eka.matka;
	cout << "\nOsoite: ";
	cin.get();
	cin.getline (eka.osoite, 40);
	cout << "\nPostinumero: ";
	cin >> ws >> eka.postin;
	cout << "\nKeng„nnumero: ";
	cin >> ws >> eka.keng;

	// Lopuksi tulostetaan, mit„ k„ytt„j„ on sy”tt„nyt.
	cout << endl << "Sy”tit ohjelmaan seuraavat tiedot:" << endl << endl
		<< "Nimi: " << eka.etun << " " << eka.sukun << endl
		<< "Osoite: " << eka.osoite << ", " << eka.postin << endl
		<< "Koulumatka: " << eka.matka << " kilometri„" << endl
		<< "Keng„nnumero: " << eka.keng << endl;
}