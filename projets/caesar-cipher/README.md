# caesar-cipher

`caesar-cipher` est un petit programme pour coder, décoder ou cracker des fichiers
textes en français, en utilisant le chiffrement de César.

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
Il y employait, pour les choses tout à fait secrètes, une espèce de chiffre qui
en rendait le sens inintelligible (les lettres étant disposées de manière à ne
pouvoir jamais former un mot), et qui consistait, je le dis pour ceux qui
voudront les déchiffrer, à changer le rang des lettres dans l'alphabet, en
écrivant la quatrième pour la première, c'est-à-dire le d pour le a, et ainsi
de suite.

$ ./build/caesar-cipher.out encode 4 input_initial.txt 
mpciqtpscemxtsyvpiwglswiwxsyxejemxwigvixiwyriiwtigihiglmjjviuymirvirhemxpiwirwmrmrxippmkmfpipiwpixxviwixerxhmwtswiiwhiqermivieritsyzsmvneqemwjsvqivyrqsxixuymgsrwmwxemxnipihmwtsyvgiybuymzsyhvsrxpiwhiglmjjviveglerkivpiverkhiwpixxviwherwpeptlefixirigvmzerxpeuyexvmiqitsyvpetviqmivigiwxehmvipihtsyvpieixemrwmhiwymxi
```

## Decode

```text
$ cat input_encrypted.txt 
mpciqtpscemxtsyvpiwglswiwxsyxejemxwigvixiwyriiwtigihiglmjjviuymirvirhemxpiwirwmrmrxippmkmfpipiwpixxviwixerxhmwtswiiwhiqermivieritsyzsmvneqemwjsvqivyrqsxixuymgsrwmwxemxnipihmwtsyvgiybuymzsyhvsrxpiwhiglmjjviveglerkivpiverkhiwpixxviwherwpeptlefixirigvmzerxpeuyexvmiqitsyvpetviqmivigiwxehmvipihtsyvpieixemrwmhiwymxi

$ ./build/caesar-cipher.out decode 4 input_encrypted.txt 
ilyemployaitpourleschosestoutafaitsecretesuneespecedechiffrequienrendaitlesensinintelligibleleslettresetantdisposeesdemaniereanepouvoirjamaisformerunmotetquiconsistaitjeledispourceuxquivoudrontlesdechiffrerachangerlerangdeslettresdanslalphabetenecrivantlaquatriemepourlapremierecestadireledpourleaetainsidesuite
```

## Crack

```text
$ cat input_encrypted.txt 
mpciqtpscemxtsyvpiwglswiwxsyxejemxwigvixiwyriiwtigihiglmjjviuymirvirhemxpiwirwmrmrxippmkmfpipiwpixxviwixerxhmwtswiiwhiqermivieritsyzsmvneqemwjsvqivyrqsxixuymgsrwmwxemxnipihmwtsyvgiybuymzsyhvsrxpiwhiglmjjviveglerkivpiverkhiwpixxviwherwpeptlefixirigvmzerxpeuyexvmiqitsyvpetviqmivigiwxehmvipihtsyvpieixemrwmhiwymxi

$ ./build/caesar-cipher.out crack input_encrypted.txt 
key = 4
ilyemployaitpourleschosestoutafaitsecretesuneespecedechiffrequienrendaitlesensinintelligibleleslettresetantdisposeesdemaniereanepouvoirjamaisformerunmotetquiconsistaitjeledispourceuxquivoudrontlesdechiffrerachangerlerangdeslettresdanslalphabetenecrivantlaquatriemepourlapremierecestadireledpourleaetainsidesuite
```

## Planning

- [ ] implémenter le module `preprocess` + Tests Unitaires + Doxygen
- [ ] implémenter le module `code` + Tests Unitaires + Doxygen
- [ ] implémenter `encode/decode` dans le `main`
- [ ] implémenter le module `crack` + Tests Unitaires + Doxygen
- [ ] implémenter `crack` dans le `main`
- [ ] finaliser la doc Doxygen (`mainpage`)
- [ ] écrire une doc MdBook 


