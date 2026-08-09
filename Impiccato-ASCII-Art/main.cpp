#include <iostream>
using namespace std;

void stampaRiga(char c, int riga) {
    switch (c) {
        case 'A':
            if (riga == 0) cout << "  ***  ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " ***** ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'B':
            if (riga == 0) cout << " ****  ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " ****  ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << " ****  ";
            break;

        case 'C':
            if (riga == 0) cout << "  **** ";
            if (riga == 1) cout << " *     ";
            if (riga == 2) cout << " *     ";
            if (riga == 3) cout << " *     ";
            if (riga == 4) cout << "  **** ";
            break;

        case 'D':
            if (riga == 0) cout << " ****  ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " *   * ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << " ****  ";
            break;

        case 'E':
            if (riga == 0) cout << " ***** ";
            if (riga == 1) cout << " *     ";
            if (riga == 2) cout << " ****  ";
            if (riga == 3) cout << " *     ";
            if (riga == 4) cout << " ***** ";
            break;

        case 'F':
            if (riga == 0) cout << " ***** ";
            if (riga == 1) cout << " *     ";
            if (riga == 2) cout << " ****  ";
            if (riga == 3) cout << " *     ";
            if (riga == 4) cout << " *     ";
            break;

        case 'G':
            if (riga == 0) cout << "  **** ";
            if (riga == 1) cout << " *     ";
            if (riga == 2) cout << " *  ** ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << "  **** ";
            break;

        case 'H':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " ***** ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'I':
            if (riga == 0) cout << " ***** ";
            if (riga == 1) cout << "   *   ";
            if (riga == 2) cout << "   *   ";
            if (riga == 3) cout << "   *   ";
            if (riga == 4) cout << " ***** ";
            break;

        case 'J':
            if (riga == 0) cout << "   *** ";
            if (riga == 1) cout << "    *  ";
            if (riga == 2) cout << "    *  ";
            if (riga == 3) cout << " *  *  ";
            if (riga == 4) cout << "  **   ";
            break;

        case 'K':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << " *  *  ";
            if (riga == 2) cout << " ***   ";
            if (riga == 3) cout << " *  *  ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'L':
            if (riga == 0) cout << " *     ";
            if (riga == 1) cout << " *     ";
            if (riga == 2) cout << " *     ";
            if (riga == 3) cout << " *     ";
            if (riga == 4) cout << " ***** ";
            break;

        case 'M':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << " ** ** ";
            if (riga == 2) cout << " * * * ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'N':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << " **  * ";
            if (riga == 2) cout << " * * * ";
            if (riga == 3) cout << " *  ** ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'O':
            if (riga == 0) cout << "  ***  ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " *   * ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << "  ***  ";
            break;

        case 'P':
            if (riga == 0) cout << " ****  ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " ****  ";
            if (riga == 3) cout << " *     ";
            if (riga == 4) cout << " *     ";
            break;

        case 'Q':
            if (riga == 0) cout << "  ***  ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " *   * ";
            if (riga == 3) cout << " *  ** ";
            if (riga == 4) cout << "  **** ";
            break;

        case 'R':
            if (riga == 0) cout << " ****  ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " ****  ";
            if (riga == 3) cout << " *  *  ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'S':
            if (riga == 0) cout << "  **** ";
            if (riga == 1) cout << " *     ";
            if (riga == 2) cout << "  ***  ";
            if (riga == 3) cout << "     * ";
            if (riga == 4) cout << " ****  ";
            break;

        case 'T':
            if (riga == 0) cout << " ***** ";
            if (riga == 1) cout << "   *   ";
            if (riga == 2) cout << "   *   ";
            if (riga == 3) cout << "   *   ";
            if (riga == 4) cout << "   *   ";
            break;

        case 'U':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " *   * ";
            if (riga == 3) cout << " *   * ";
            if (riga == 4) cout << "  ***  ";
            break;

        case 'V':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " *   * ";
            if (riga == 3) cout << "  * *  ";
            if (riga == 4) cout << "   *   ";
            break;

        case 'W':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << " *   * ";
            if (riga == 2) cout << " * * * ";
            if (riga == 3) cout << " ** ** ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'X':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << "  * *  ";
            if (riga == 2) cout << "   *   ";
            if (riga == 3) cout << "  * *  ";
            if (riga == 4) cout << " *   * ";
            break;

        case 'Y':
            if (riga == 0) cout << " *   * ";
            if (riga == 1) cout << "  * *  ";
            if (riga == 2) cout << "   *   ";
            if (riga == 3) cout << "   *   ";
            if (riga == 4) cout << "   *   ";
            break;

        case 'Z':
            if (riga == 0) cout << " ***** ";
            if (riga == 1) cout << "    *  ";
            if (riga == 2) cout << "   *   ";
            if (riga == 3) cout << "  *    ";
            if (riga == 4) cout << " ***** ";
            break;

        case '_':
            if (riga == 4) cout << " _____ ";
            else cout << "       ";
            break;

        default:
            cout << "       ";
    }
}

void visualizzaImpiccato(int errori) {
    cout << "\n--- IMPICCATO (Errori: " << errori << "/5) ---" << endl;
    cout << "  +---+" << endl;
    cout << "  |   |" << endl;
    
    if (errori >= 1){ 
        cout << "  O   |" << endl;
    }
            else{ 
            cout << "      |" << endl;
        }
    
    if (errori >= 2){
    cout << "  |   |"<<endl;

    }
            else{ 
            cout << "      |"<<endl;
        }
        
    if (errori >= 3){
        cout << " \\|/  |" << endl;

    }
            else{ 
            cout << "      |" << endl;
        }
        
    if (errori >= 4){ 
        cout << "  |   |" << endl;

    }
        else{ 
            cout << "      |" << endl;
        }
    if (errori == 5){ 
        cout << " . .  |" << endl;

    }
        else{ 
            cout << "      |" << endl;
        }
    
    cout << "      |" << endl;
    cout << "=========\n" << endl;
}

int main() {
    string giocatore1, giocatore2;
    string parolaDaIndovinare;
    
    // Input dei giocatori
    cout << "===== GIOCO DELL'IMPICCATO =====" << endl;
    cout << "Inserisci il nome del primo giocatore (chi cela la parola): ";
    cin >> giocatore1;
    cout << "Inserisci il nome del secondo giocatore (chi indovina): ";
    cin >> giocatore2;
    
    cout << "\n" << giocatore1 << ", inserisci la parola segreta (MAIUSCOLI): ";
    cin >> parolaDaIndovinare;
    
    int lunghezzaParola = parolaDaIndovinare.length();
    char parolaVisualizzata[26];
    char c;
    bool parolaCompleta = false;
    int errori = 0;
    bool gioco_attivo = true;
    
    // Inizializza la parola con underscore
    for (int i = 0; i < lunghezzaParola; i++) {
        parolaVisualizzata[i] = '_';
    }
    
    cout << "\n========================================" << endl;
    cout << "Ora tocca a " << giocatore2 << " indovinare la parola!" << endl;
    cout << "La parola ha " << lunghezzaParola << " lettere." << endl;
    cout << "Hai a disposizione 6 errori.\n" << endl;
    
    while (gioco_attivo) {
        visualizzaImpiccato(errori);
        
        // Visualizza la parola
        cout << "Parola: "<<endl;
        for (int riga = 0; riga < 5; riga++) {
            for (int i = 0; i < lunghezzaParola; i++) {
                stampaRiga(parolaVisualizzata[i], riga);
            }
            cout << endl;
        }
        
        cout << "\n" << giocatore2 << ", inserisci una lettera maiuscola (0 per uscire): ";
        cin >> c;
        
        if (c == '0') {
            cout << "\n" << giocatore2 << " ha abbandonato il gioco." << endl;
            cout << "La parola era: " << parolaDaIndovinare << endl;
            break;
        }
        
        bool letteraTrovata = false;
        
        // Cerca la lettera nella parola
        for (int i = 0; i < lunghezzaParola; i++) {
            if (parolaDaIndovinare[i] == c && parolaVisualizzata[i] == '_') {
                parolaVisualizzata[i] = c;
                letteraTrovata = true;
            }
        }
        
        if (letteraTrovata) {
            cout << "\nOttimo! La lettera '" << c << "' è presente!" << endl;
        } else {
            cout << "\nMi dispiace, la lettera '" << c << "' non è presente." << endl;
            errori++;
        }
        
        // Controlla se ha vinto
        parolaCompleta = true;
        for (int i = 0; i < lunghezzaParola; i++) {
            if (parolaVisualizzata[i] == '_') {
                parolaCompleta = false;
                break;
            }
        }
        
        // Controlla se ha perso
        if (errori >= 5) {
            gioco_attivo = false;
            visualizzaImpiccato(errori);
            cout << "GAME OVER! " << giocatore2 << " ha fatto troppi errori." << endl;
            cout << "La parola era: " << parolaDaIndovinare << endl;
            cout << giocatore1 << " VINCE!" << endl;
        } else if (parolaCompleta) {
            gioco_attivo = false;
            visualizzaImpiccato(errori);
            cout << "\nCOMPLIMENTI! " << giocatore2 << " HA VINTO!" << endl;
            cout << "La parola era: " << parolaDaIndovinare << endl;
        }
    }
    
    return 0;
}