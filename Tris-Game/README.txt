# Tris Game

Un gioco del tris (tic-tac-toe) interattivo in C++ per 2 giocatori umani.
Ogni giocatore sceglie il proprio simbolo (O o X) e si sfidano fino a che non c'è un vincitore o il board è pieno.

## Come usare

```bash
g++ main.cpp -o tris
./tris
```

## Features

- 2 giocatori umani
- Scelta personalizzata dei simboli (O e X)
- Griglia 3x3 con numeri per scegliere la posizione
- Validazione: non permette giocate su caselle già occupate
- Controllo automatico di tutti i vincitori (3 righe, 3 colonne, 2 diagonali)
- Partite multiple: gioca quanto vuoi
- Interfaccia pulita con refresh automatico dello schermo

## Come funziona

1. Inserisci i nomi dei 2 giocatori
2. Scegli i vostri simboli (O oppure X - devono essere diversi)
3. Giocate a turno indicando riga (1-3) e colonna (1-3)
4. Il programma verifica automaticamente se qualcuno ha vinto
5. Puoi giocare altre partite o terminare