# Impiccato (Hangman) - Multigiocatore

Un gioco dell'impiccato in C++ per 2 giocatori con visualizzazione ASCII art.
Un giocatore cela una parola, l'altro deve indovinarla prima di fare 6 errori.

## Come usare

```bash
g++ main.cpp -o impiccato
./impiccato
```

## Features

- **Gioco multigiocatore**: Un giocatore cela la parola, l'altro indovina
- Ogni lettera visualizzata in ASCII art personalizzato
- **Sistema di errori**: massimo 6 errori prima di perdere
- **Disegno dell'impiccato**: cambia man mano che fai errori
- Contatore errori visibile durante il gioco
- Possibilità di uscire digitando "0"
- Annuncio del vincitore al termine

## Come funziona

1. **Primo giocatore**: Inserisce il nome e la parola segreta (in MAIUSCOLI)
2. **Secondo giocatore**: Cerca di indovinare la parola una lettera alla volta
3. Se la lettera è nella parola → viene rivelata in ASCII art
4. Se NON è nella parola → il secondo giocatore guadagna 1 errore (massimo 6)
5. Il disegno dell'impiccato aumenta ad ogni errore
6. **Il secondo giocatore vince** se indovina tutte le lettere
7. **Il primo giocatore vince** se il secondo fa 6 errori