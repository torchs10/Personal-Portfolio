# Matrix Random Generator & Bubble Sort (Line by Line)

Un programma in C++ che genera una matrice 3x3 di numeri interi casuali (da 0 a 9), ordina ogni singola riga in ordine crescente utilizzando l'algoritmo **Bubble Sort** e salva sia la matrice originale che quella ordinata in un file di testo denominato `sequenzarandom.txt`.

## Come usare

Compila ed esegui il codice con:

    g++ main.cpp -o matrix_sort
    ./matrix_sort

Dopo l'esecuzione, il programma mostrerà i risultati a schermo e creerà (o sovrascriverà) il file `sequenzarandom.txt` nella stessa cartella.

## Features

- Generazione di una matrice $3 \times 3$ con valori casuali da 0 a 9 mediante `rand()` e `srand(time(NULL))`
- Ordinamento indipendente riga per riga tramite algoritmo **Bubble Sort**
- Output simultaneo a console (`cout` / `printf`) e su file (`fprintf`)
- Salvataggio automatico sul file `sequenzarandom.txt`
- Gestione base degli errori per l'apertura del file

## Come funziona

Il programma esegue le seguenti operazioni in sequenza all'interno della funzione `main`:

1. **Inizializzazione e apertura file**:
   - Viene inizializzato il generatore di numeri casuali basandosi sull'ora attuale (`srand(time(NULL))`).
   - Viene aperto in modalità scrittura (`"w"`) il file `sequenzarandom.txt`. Se l'apertura fallisce, il programma termina immediatamente.

2. **Generazione e Stampa della Matrice Originale**:
   - Viene popolata la matrice `M[3][3]` con valori casuali compresi tra 0 e 9 (`rand() % 10`).
   - La matrice viene stampata a schermo e contemporaneamente scritta sul file di testo.

3. **Ordinamento delle Righe (Bubble Sort)**:
   - Attraverso un ciclo esterno sulle righe (`i`), viene applicato l'algoritmo Bubble Sort su ciascuna riga.
   - I due cicli interni (`k` e `j`) confrontano gli elementi adiacenti `M[i][j]` e `M[i][j+1]` e li scambiano (`swap` tramite variabile temporanea `temp`) se non sono in ordine crescente.

4. **Stampa della Matrice Ordinata e Chiusura**:
   - La matrice con le righe ordinate viene stampata a console e registrata su file sotto l'intestazione `"MATRICE ORDINATA:"`.
   - Il file viene chiuso correttamente tramite `fclose(fp)`.

---

## Codice Sorgente Completo

/******************************************************************************
Generating a random Matrix     Bubble Sorting for lines
27/10/26                        27/10/26
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

#define RIGHE 3
#define COLONNE 3

using namespace std;

int main() {
    int M[RIGHE][COLONNE];
    srand(time(NULL));
    
    FILE* fp = fopen("sequenzarandom.txt", "w");

    if(fp == NULL){
        return 0;
    }

    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            M[i][j] = rand() % 10; 
        }
    }
    
    cout << "MATRICE:\n";
    fprintf(fp, "MATRICE:\n");
    
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("[%d] ", M[i][j]);
            fprintf(fp, "[%d] ", M
