/******************************************************************************
venerdì 25/9/26
*******************************************************************************/
#include <iostream>
#include <mylib.h> 

using namespace std;

int main() {
    int scelta;
    double risultato;

    do {
        scelta = fSCELTA(); 
        system("clear");
        switch (scelta) {
            case 1:
                risultato = fSOMMA();
                break;

            case 2:
                risultato = fSOTTRAZIONE();
                break;

            case 3:
                risultato = fMOLTIPLICAZIONE();
                break;

            case 4:
                risultato = fDIVISIONE();
                if (risultato == -1) {
                    cout << "Chiusura del programma causa errore nella divisione.\n";
                    return 0; 
                }
                break;

            case 5:
                risultato = fRADICE();
                if (risultato == -1) {
                    cout << "Chiusura del programma causa errore nella radice.\n";
                    return 0; 
                }
                break;

            case 6:
                cout << "Uscita in corso...\n";
                return 0;

            default:
                cout << "Opzione non valida. Riprova.\n\n";
                continue; 
        }

        cout << "Il risultato è: " << risultato << "\n\n";

    } while (scelta != 6);

    return 0;
}