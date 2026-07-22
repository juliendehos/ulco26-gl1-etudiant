# caesar-cipher

`caesar-cipher` est un petit programme pour coder, décoder ou cracker des fichiers
textes en français, en utilisant le chiffrement de César.

`caesar-cipher` ne considère que les lettres en minuscule; les autres
caractères sont oubliés.

## Usage

```text
$ ./build/caesar-cipher.out
Usage: ./build/caesar-cipher.out <command> <input_file>
command:
  - encode <key>
  - decode <key>
  - crack
```

## Code

```text
$ cat input_initial.txt 
il y employait, pour les choses tout a fait secretes, une espece de chiffre qui
en rendait le sens inintelligible (les lettres etant disposees de maniere a ne
pouvoir jamais former un mot), et qui consistait, je le dis pour ceux qui
voudront les dechiffrer, a changer le rang des lettres dans l'alphabet, en
ecrivant la quatrieme pour la premiere, c'est-a-dire le d pour le a, et ainsi
de suite.

$ ./build/caesar-cipher.out encode 4 data/input_initial.txt 
mpciqtpscemxtsyvpiwglswiwxsyxejemxwigvixiwyriiwtigihiglmjjviuymirvirhemxpiwirwmrmrxippmkmfpipiwpixxviwixerxhmwtswiiwhiqermivieritsyzsmvneqemwjsvqivyrqsxixuymgsrwmwxemxnipihmwtsyvgiybuymzsyhvsrxpiwhiglmjjviveglerkivpiverkhiwpixxviwherwpeptlefixirigvmzerxpeuyexvmiqitsyvpetviqmivigiwxehmvipihtsyvpieixemrwmhiwymxi
```

## Decode

```text
$ cat data/input_encrypted.txt 
mpciqtpscemxtsyvpiwglswiwxsyxejemxwigvixiwyriiwtigihiglmjjviuymirvirhemxpiwirwmrmrxippmkmfpipiwpixxviwixerxhmwtswiiwhiqermivieritsyzsmvneqemwjsvqivyrqsxixuymgsrwmwxemxnipihmwtsyvgiybuymzsyhvsrxpiwhiglmjjviveglerkivpiverkhiwpixxviwherwpeptlefixirigvmzerxpeuyexvmiqitsyvpetviqmivigiwxehmvipihtsyvpieixemrwmhiwymxi

$ ./build/caesar-cipher.out decode 4 data/input_encrypted.txt 
ilyemployaitpourleschosestoutafaitsecretesuneespecedechiffrequienrendaitlesensinintelligibleleslettresetantdisposeesdemaniereanepouvoirjamaisformerunmotetquiconsistaitjeledispourceuxquivoudrontlesdechiffrerachangerlerangdeslettresdanslalphabetenecrivantlaquatriemepourlapremierecestadireledpourleaetainsidesuite
```

## Crack

```text
$ cat data/input_encrypted.txt 
mpciqtpscemxtsyvpiwglswiwxsyxejemxwigvixiwyriiwtigihiglmjjviuymirvirhemxpiwirwmrmrxippmkmfpipiwpixxviwixerxhmwtswiiwhiqermivieritsyzsmvneqemwjsvqivyrqsxixuymgsrwmwxemxnipihmwtsyvgiybuymzsyhvsrxpiwhiglmjjviveglerkivpiverkhiwpixxviwherwpeptlefixirigvmzerxpeuyexvmiqitsyvpetviqmivigiwxehmvipihtsyvpieixemrwmhiwymxi

$ ./build/caesar-cipher.out crack data/input_encrypted.txt 
key = 4
ilyemployaitpourleschosestoutafaitsecretesuneespecedechiffrequienrendaitlesensinintelligibleleslettresetantdisposeesdemaniereanepouvoirjamaisformerunmotetquiconsistaitjeledispourceuxquivoudrontlesdechiffrerachangerlerangdeslettresdanslalphabetenecrivantlaquatriemepourlapremierecestadireledpourleaetainsidesuite
```

## Planning

- [ ] implémenter le module `code` + Tests Unitaires + Doxygen
- [ ] implémenter `encode/decode` dans le `main`
- [ ] implémenter le module `crack` + Tests Unitaires + Doxygen
- [ ] implémenter `crack` dans le `main`
- [ ] finaliser la doc Doxygen (`mainpage`)
- [ ] écrire une doc MdBook 


