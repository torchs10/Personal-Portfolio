//dichiarazione di tutte le funzioni +,-,*,/,√
#include <iostream>
#include <cmath>

using namespace std;

int fSCELTA() {
    int scelta;
    cout << "--- MENU CALCOLATRICE ---\n";
    cout << "1. Somma\n";
    cout << "2. Sottrazione\n";
    cout << "3. Moltiplicazione\n";
    cout << "4. Divisione\n";
    cout << "5. Radice Quadrata\n";
    cout << "6. Esci\n";
    cout << "Scegli un'opzione: ";
    cin >> scelta;
    return scelta;
}

double fSOMMA() {
    double a, b;
    cout << "Inserisci primo numero: ";
    cin >> a;
    cout << "Inserisci secondo numero: ";
    cin >> b;
    return a + b;
}

double fSOTTRAZIONE() {
    double a, b;
    cout << "Inserisci primo numero: ";
    cin >> a;
    cout << "Inserisci secondo numero: ";
    cin >> b;
    return a - b;
}

double fMOLTIPLICAZIONE() {
    double a, b;
    cout << "Inserisci primo numero: ";
    cin >> a;
    cout << "Inserisci secondo numero: ";
    cin >> b;
    return a * b;
}

double fDIVISIONE() {
    double a, b;
    cout << "Inserisci primo numero: ";
    cin >> a;
    cout << "Inserisci secondo numero: ";
    cin >> b;
    if (b == 0) {
        cout << "Errore: Divisione per zero non consentita.\n";
        return -1; 
    }
    return a / b;
}

double fRADICE() {
    double a;
    cout << "Inserisci il numero: ";
    cin >> a;
    if (a < 0) {
        cout << "Errore: Impossibile calcolare la radice di un numero negativo.\n";
        return -1;
    }
    return sqrt(a);
}