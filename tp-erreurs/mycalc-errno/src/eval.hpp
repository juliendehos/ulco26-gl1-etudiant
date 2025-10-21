#pragma once

#include "parse.hpp"

// Calcule le nieme terme de la suite de Fibonacci.
// Si n est trop grand ou négatif, retourne min_int et met mycalc_error à
// MycalcError::Domain.
int myfibo(int n);

// Calcule la partie entière de la racine carrée d'un entier.
// Si n est négatif, retourne min_int et met mycalc_error à
// MycalcError::Domain.
int mysqrt(int n);

// Évalue une expression (donnée par sa liste renversée de tokens).
// En cas d'échec, retourne min_int et met mycalc_error à MycalcError::Eval ou
// à MycalcError::Parse.
int eval(const std::list<Token> & tokens);

