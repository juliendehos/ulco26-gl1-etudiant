
# Mycalc

## Description

Mycalc est une petite calculatrice en [notation
préfixée](https://fr.wikipedia.org/wiki/Notations_infix%C3%A9e,_pr%C3%A9fix%C3%A9e,_polonaise_et_postfix%C3%A9e).

```
> + 1 2
3
> + * 3 2 1
7
> sqrt 2
1.41421
> * 21 sqrt / 8 2
42
```

## Fonctionnalités

- nombres réels
- opérateurs `+`, `-`, `*` et `/`
- fonction `sqrt`

## Gestion d'erreurs

- erreur de parsing:

    ```
    > foobar
    parse error
    > 2.0.0
    parse error
    ```

- erreur d'évaluation:

    ```
    > + 2
    evaluation error
    > sqrt
    evaluation error
    ```

- valeurs hors domaine de définition:

    ```
    > sqrt -2
    domain error
    ```

