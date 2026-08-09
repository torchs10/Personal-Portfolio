/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string giocatori[3];
	int punti[3] = {0, 0, 0};

	// Inserimento nomi
	cout << "Inserisci il nome del primo giocatore: ";
	cin >> giocatori[0];

	cout << "Inserisci il nome del secondo giocatore: ";
	cin >> giocatori[1];

	cout << "Inserisci il nome del terzo giocatore: ";
	cin >> giocatori[2];

	// Partite del torneo
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			char vincitore;

			cout << "\nPartita: " << giocatori[i]
			     << " vs " << giocatori[j] << endl;
			cout << "Chi ha vinto? (1 = "<< giocatori[i] << ", X = Pareggio"<<", 2 = "<< giocatori[j] << "): ";
			cin >> vincitore;

			if (vincitore == '1'){
				punti[i]=punti[i]+3;
			}
			
			else if (vincitore == 'X'){
		    	punti[i]++;
		    	punti[j]++;
			}
			
			else if (vincitore == '2'){
				punti[j]=punti[j]+3;
			}
			else{
				cout << "Scelta non valida!" << endl;
			}
		}
	}

	// Classifica finale
	cout << "\n--- CLASSIFICA FINALE ---" << endl;
	for (int i = 0; i < 3; i++) {
		cout << giocatori[i] << " - " << punti[i] << " punti" << endl;
	}

	return 0;
}