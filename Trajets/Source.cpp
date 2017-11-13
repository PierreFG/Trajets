#include <iostream>
#include <CString>
using namespace std;

void ajTrajSimp() {

}

void ajTrajComp() {

}

void rechSimp() {

}

void rechAv() {

}

int main() {
	cout << "/////////////// POLYMORPHISME ///////////////";

	
	bool verif = false;
	//Catalogue C = new Catalogue();

	while (verif ==false) {
		int temp;

		cout << "1. Ajouter trajet simple" << endl;
		cout << "2. Ajouter trajet composé" << endl;
		cout << "3. Recherche" << endl;
		cout << "4. Recherche avancée" << endl;
		cout << "5. Quitter" << endl;

		cin >> temp;

		switch (temp) {
			case 1:
				ajTrajSimp();
				break;

			case 2:
				ajTrajComp();
				break;

			case 3:
				rechSimp();
				break;
				
			case 4:
				rechAv();
				break;

			case 5:
				verif = true;
				break;
		}
	}

	return 0;
}