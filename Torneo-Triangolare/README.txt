# Torneo Triangolare 1v1v1

Un torneo automatico dove 3 giocatori si sfidano in partite 1v1v1.
Il programma calcola automaticamente la classifica finale basata sui punti accumulati.

## Come usare

```bash
g++ main.cpp -o torneo
./torneo
```

## Features

- Inserimento nomi dei 3 giocatori
- 3 partite automatiche (Giocatore 1 vs 2, Giocatore 1 vs 3, Giocatore 2 vs 3)
- Sistema di punteggio: vittoria = 3 punti, pareggio = 1 punto, sconfitta = 0 punti
- Classifica finale automatica ordinata per giocatore

## Come funziona

1. Inserisci i nomi dei 3 giocatori
2. Il programma organizza le partite automaticamente
3. Per ogni partita, indica il vincitore:
   - Digita `1` se vince il primo giocatore
   - Digita `X` se è pareggio
   - Digita `2` se vince il secondo giocatore
4. Dopo tutte le partite, il programma mostra la classifica finale con i punti totali