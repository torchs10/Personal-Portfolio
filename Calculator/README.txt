# Calcolatrice Interattiva in C++

Un'applicazione console in C++ per eseguire operazioni aritmetiche di base e il calcolo della radice quadrata, scritta interamente in un unico file.

## Come usare

Compila ed esegui il codice con:

    g++ calcolatrice.cpp -o calcolatrice
    ./calcolatrice

(Nota: se usi Windows e riscontri problemi con la pulizia dello schermo, puoi sostituire system("clear") con system("cls") nel codice).

## Features

- Menu interattivo per la scelta delle operazioni
- Operazioni supportate:
  - Somma (+)
  - Sottrazione (-)
  - Moltiplicazione (*)
  - Divisione (/) con controllo della divisione per zero
  - Radice Quadrata (√) con controllo dei numeri negativi
- Gestione degli errori critici con chiusura di sicurezza del programma
- Interfaccia pulita con refresh dello schermo ad ogni iterazione
- Esecuzione continua tramite ciclo do-while finché non si sceglie di uscire

## Come funziona

Il programma è racchiuso in un unico file ed è strutturato in due parti principali:

### 1. Le funzioni di supporto
Il codice definisce diverse funzioni specializzate per gestire l'interazione e i calcoli:
- int fSCELTA(): Mostra il menu principale a schermo, acquisisce la scelta dell'utente e la restituisce.
- double fSOMMA(): Chiede due numeri all'utente e restituisce la loro somma.
- double fSOTTRAZIONE(): Chiede due numeri e restituisce la differenza.
- double fMOLTIPLICAZIONE(): Chiede due numeri e restituisce il prodotto.
- double fDIVISIONE(): Chiede due numeri e verifica che il divisore non sia zero (in caso contrario stampa un errore e restituisce -1).
- double fRADICE(): Chiede un numero e verifica che non sia negativo prima di calcolare la radice quadrata con sqrt() (restituisce -1 in caso di errore).

### 2. La funzione principale (main)
- Gestisce il flusso dell'applicazione tramite un ciclo do-while che ripete il menu finché non viene selezionata l'opzione 6 (Esci).
- Utilizza un blocco switch (scelta) per richiamare la funzione corretta in base alla richiesta dell'utente.
- Pulisce lo schermo ad ogni ciclo con system("clear").
- Controlla i valori di ritorno: se una funzione restituisce -1 (errore di divisione o radice), il programma interrompe l'esecuzione e termina in sicurezza.

---

## Codice Sorgente Completo (calcolatrice.cpp)

/******************************************************************************
Calculator with + - * / √
25/9/26
*******************************************************************************/
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

int main() {
    int scelta;
    double risultato;

    do {
        scelta = fSCELTA(); 
        system("clear"); // Nota: usa "cls" al posto di "clear" se sei su Windows
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
