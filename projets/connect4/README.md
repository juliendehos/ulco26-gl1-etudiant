# Connect4

## Description

Une implémentation du jeu [Puissance 4](https://fr.wikipedia.org/wiki/Puissance_4).

```text
. . . . . . . 
. . . . . . . 
. . . . . . . 
. . . . . . . 
. . X . . . . 
. X O . . . . 
--------------
0 1 2 3 4 5 6 

Player 2's turn (O). Enter column (0-6): 
```

## Gestion des erreurs de saisie

```text
. . . O . . . 
. . . X . . . 
. . . O . . . 
. . . X . . . 
. . . O . . . 
. . . X . . . 
--------------
0 1 2 3 4 5 6 

Player 1's turn (X). Enter column (0-6): 3
Invalid move. Try again.

Player 1's turn (X). Enter column (0-6): 42
Invalid move. Try again.

Player 1's turn (X). Enter column (0-6): foobar
Invalid input. Try again.

Player 1's turn (X). Enter column (0-6): 
```

## Planning:

- [ ] `getNewI` + tests unitaires 
- [ ] `playMove` sans détection de victoire + tests unitaires 
- [ ] `checkWin` + tests unitaires 
- [ ] détection de victoire dans `playMove` + tests unitaires 
- [ ] `printBoard` + `main`, sans gestion des erreurs de saisie
- [ ] gestion des erreurs de saisie
- [ ] documentation doxygen

