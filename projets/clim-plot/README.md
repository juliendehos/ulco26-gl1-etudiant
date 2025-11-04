# clim-plot

Graphiques sur l'évolution du climat dans le Pas-de-Calais.


## Données

Les données proviennent du jeu [Données climatologiques de base -
mensuelles](https://www.data.gouv.fr/datasets/donnees-climatologiques-de-base-mensuelles/),
sur [datagouv](https://www.data.gouv.fr/).


## Températures

Le jeu de données contient la température moyenne (colonne `TMM`) de chaque
mois (`AAAAMM`) et de chaque station de mesure (`NOM_USUEL`). Pour les tracer,
on fait leur moyenne sur l'année (12 mois).

Les données ne sont pas disponibles pour tous les mois ni pour toutes les
stations. Seules les années complètes sont tracées, pour éviter les biais. 


## Usage

Décompresser le jeu de données :

```text
$ tar zxf data.tgz
```

Aide en ligne :

```text
$ ./build/clim-plot.out 
usage:
 - stations
 - temp <station> <output image>
```

Liste des stations de mesures :

```text
$ ./build/clim-plot.out stations
2025-11-04 21:40:30.376 INFO  [24338] [getStations@42] reading data/MENSQ_62_previous-1950-2023.csv
ACHIET-LE-GRAND
AIRE SUR LA LYS
ALETTE
ALLOUAGNE
ARRAS
...
```

Tracé des températures d'une station :

```text
$ ./build/clim-plot.out temp ARRAS arras-temp.svg
2025-11-04 21:42:16.311 INFO  [24391] [plotTemperatures@61] reading data/MENSQ_62_previous-1950-2023.csv
2025-11-04 21:42:16.436 INFO  [24391] [plotTemperatures@64] building dataset
2025-11-04 21:42:16.445 INFO  [24391] [plotTemperatures@77] processing data
2025-11-04 21:42:16.445 INFO  [24391] [plotTemperatures@92] plotting data
```

Gestion d'erreurs :

```text
$ ./build/clim-plot.out temp PARIS paris-temp.svg
2025-11-04 21:41:18.667 INFO  [24365] [plotTemperatures@61] reading data/MENSQ_62_previous-1950-2023.csv
2025-11-04 21:41:18.791 INFO  [24365] [plotTemperatures@64] building dataset
2025-11-04 21:41:18.801 INFO  [24365] [plotTemperatures@77] processing data
2025-11-04 21:41:18.805 ERROR [24365] [main@47] no data
```


## Références

- [Données climatologiques de base - mensuelles](https://www.data.gouv.fr/datasets/donnees-climatologiques-de-base-mensuelles/)
- [Vince's CSV Parser](https://github.com/vincentlaucsb/csv-parser)
- [Matplot++](https://github.com/alandefreitas/matplotplusplus)


## Planning

- [ ] implémenter la liste des stations, tester dans le `main`
- [ ] implémenter le tracé de températures moyennes annuelles, tester dans le `main`
- [ ] implémenter le `main` avec les arguments de la ligne de commande
- [ ] gestion des erreurs avec les exceptions 
- [ ] ajouter des messages de log
- [ ] écrire le mdbook, avec une introduction et quelques pages/stations (ARRAS, BOULOGNE-SEM, CALAIS-MARCK)
- [ ] tracer les précipitations (RR)
- [ ] moyenner sur toutes les stations du département

