#pragma once

#include "parse.hpp"

// Calcule le nieme terme de la suite de Fibonacci.
// Si n est trop grand ou négatif, lève une exception MycalcError::Domain.
int myfibo(int n);

// Calcule la partie entière de la racine carrée d'un entier.
// Si n est négatif, lève une exception MycalcError::Domain.
int mysqrt(int n);

// Évalue une expression (donnée par sa liste renversée de tokens).
// En cas d'échec, lève une exception MycalcError::Eval ou MycalcError::Parse.
int eval(const std::list<Token> & tokens);

